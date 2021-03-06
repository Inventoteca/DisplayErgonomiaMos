/*
 * Copyright (c) 2014-2018 Cesanta Software Limited
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the ""License"");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ""AS IS"" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "common/cs_dbg.h"
#include "mgos_app.h"
#include "mgos_neopixel.h"
#include "mgos_timers.h"
#include "mgos.h"
#include "mgos_dht.h"
#include "mgos_rpc.h"

#define PIN 0 //GPIO14
#define NUM_PIXELS 272
#define ORDER MGOS_NEOPIXEL_ORDER_GRB

struct mgos_neopixel *s_strip = NULL;
//struct mgos_dht *dht = NULL;

// Temperature timer
static void timer_cb(void *dht) 
{
  LOG(LL_INFO, ("Temperature: %lf", mgos_dht_get_temp(dht)));
  LOG(LL_INFO, ("Humidity: %lf", mgos_dht_get_humidity(dht)));
}

// Response
static void rpc_cb(struct mg_rpc_request_info *ri, void *cb_arg,
                   struct mg_rpc_frame_info *fi, struct mg_str args) 
                   {
  mg_rpc_send_responsef(ri, "{value: %i}", mgos_dht_get_humidity(cb_arg));
  (void) fi;
  (void) args;
}

static void pixel_timer_cb(void *arg) 
{
  static int s_cnt = 0;
  int pixel = (s_cnt++) % NUM_PIXELS;
  int r = s_cnt % 255, g = (s_cnt * 2) % 255, b = s_cnt * s_cnt % 255;
  mgos_neopixel_clear(s_strip);
  mgos_neopixel_set(s_strip, pixel, r, g, b);
  mgos_neopixel_show(s_strip);
  //LOG(LL_INFO, ("%3d %3d %3d %3d", pixel, r, g, b));
  (void) arg;
}

enum mgos_app_init_result mgos_app_init(void) 
{
  s_strip = mgos_neopixel_create(PIN, NUM_PIXELS, ORDER);
  mgos_set_timer(500 /* ms */, MGOS_TIMER_REPEAT, pixel_timer_cb, NULL);
  struct mgos_dht *dht = mgos_dht_create(mgos_sys_config_get_app_pin(), DHT22);
  mgos_set_timer(1000, true, timer_cb, dht);
  mg_rpc_add_handler(mgos_rpc_get_global(), "Temp.Read", "", rpc_cb, dht);
  return MGOS_APP_INIT_SUCCESS;
}
