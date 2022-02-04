/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.19.1/apps/mos-serverus-panel-ergo/esp8266/build_contexts/build_ctx_256239132/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /data/fwbuild-volumes/2.19.1/apps/mos-serverus-panel-ergo/esp8266/build_contexts/build_ctx_256239132/build/gen/mos_conf_schema.yml
 */

#pragma once

#include <stdbool.h>

#include "common/mg_str.h"

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif


/* debug type struct mgos_config_debug */
struct mgos_config_debug {
  const char * udp_log_addr;
  int udp_log_level;
  int mbedtls_level;
  int level;
  const char * file_level;
  int event_level;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  const char * mg_mgr_hexdump_file;
};
const struct mgos_conf_entry *mgos_config_debug_get_schema(void);
void mgos_config_debug_set_defaults(struct mgos_config_debug *cfg);
static inline bool mgos_config_debug_parse(struct mg_str json, struct mgos_config_debug *cfg) {
  mgos_config_debug_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_debug_get_schema(), cfg);
}
static inline bool mgos_config_debug_emit(const struct mgos_config_debug *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_debug_get_schema(), pretty, out);
}
static inline bool mgos_config_debug_emit_f(const struct mgos_config_debug *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_debug_get_schema(), pretty, fname);
}
static inline bool mgos_config_debug_copy(const struct mgos_config_debug *src, struct mgos_config_debug *dst) {
  return mgos_conf_copy(mgos_config_debug_get_schema(), src, dst);
}
static inline void mgos_config_debug_free(struct mgos_config_debug *cfg) {
  return mgos_conf_free(mgos_config_debug_get_schema(), cfg);
}

/* device type struct mgos_config_device */
struct mgos_config_device {
  const char * id;
  const char * license;
  const char * mac;
  const char * public_key;
  const char * sn;
};
const struct mgos_conf_entry *mgos_config_device_get_schema(void);
void mgos_config_device_set_defaults(struct mgos_config_device *cfg);
static inline bool mgos_config_device_parse(struct mg_str json, struct mgos_config_device *cfg) {
  mgos_config_device_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_device_get_schema(), cfg);
}
static inline bool mgos_config_device_emit(const struct mgos_config_device *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_device_get_schema(), pretty, out);
}
static inline bool mgos_config_device_emit_f(const struct mgos_config_device *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_device_get_schema(), pretty, fname);
}
static inline bool mgos_config_device_copy(const struct mgos_config_device *src, struct mgos_config_device *dst) {
  return mgos_conf_copy(mgos_config_device_get_schema(), src, dst);
}
static inline void mgos_config_device_free(struct mgos_config_device *cfg) {
  return mgos_conf_free(mgos_config_device_get_schema(), cfg);
}

/* sys type struct mgos_config_sys */
struct mgos_config_sys {
  const char * tz_spec;
  int wdt_timeout;
  const char * pref_ota_lib;
};
const struct mgos_conf_entry *mgos_config_sys_get_schema(void);
void mgos_config_sys_set_defaults(struct mgos_config_sys *cfg);
static inline bool mgos_config_sys_parse(struct mg_str json, struct mgos_config_sys *cfg) {
  mgos_config_sys_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_sys_get_schema(), cfg);
}
static inline bool mgos_config_sys_emit(const struct mgos_config_sys *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_sys_get_schema(), pretty, out);
}
static inline bool mgos_config_sys_emit_f(const struct mgos_config_sys *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_sys_get_schema(), pretty, fname);
}
static inline bool mgos_config_sys_copy(const struct mgos_config_sys *src, struct mgos_config_sys *dst) {
  return mgos_conf_copy(mgos_config_sys_get_schema(), src, dst);
}
static inline void mgos_config_sys_free(struct mgos_config_sys *cfg) {
  return mgos_conf_free(mgos_config_sys_get_schema(), cfg);
}

/* http type struct mgos_config_http */
struct mgos_config_http {
  int enable;
  const char * listen_addr;
  const char * document_root;
  const char * index_files;
  const char * ssl_cert;
  const char * ssl_key;
  const char * ssl_ca_cert;
  const char * upload_acl;
  const char * hidden_files;
  const char * auth_domain;
  const char * auth_file;
  const char * extra_headers;
};
const struct mgos_conf_entry *mgos_config_http_get_schema(void);
void mgos_config_http_set_defaults(struct mgos_config_http *cfg);
static inline bool mgos_config_http_parse(struct mg_str json, struct mgos_config_http *cfg) {
  mgos_config_http_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_http_get_schema(), cfg);
}
static inline bool mgos_config_http_emit(const struct mgos_config_http *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_http_get_schema(), pretty, out);
}
static inline bool mgos_config_http_emit_f(const struct mgos_config_http *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_http_get_schema(), pretty, fname);
}
static inline bool mgos_config_http_copy(const struct mgos_config_http *src, struct mgos_config_http *dst) {
  return mgos_conf_copy(mgos_config_http_get_schema(), src, dst);
}
static inline void mgos_config_http_free(struct mgos_config_http *cfg) {
  return mgos_conf_free(mgos_config_http_get_schema(), cfg);
}

/* mdash.value type struct mgos_config_mdash_value */
struct mgos_config_mdash_value {
  int enable;
  const char * title;
  const char * key;
};
const struct mgos_conf_entry *mgos_config_mdash_value_get_schema(void);
void mgos_config_mdash_value_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value_get_schema(), cfg);
}

/* mdash.value1 type struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value1_get_schema(void);
void mgos_config_mdash_value1_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value1_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value1_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value1_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value1_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value1_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value1_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value1_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value1_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value1_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value1_get_schema(), cfg);
}

/* mdash.value2 type struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value2_get_schema(void);
void mgos_config_mdash_value2_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value2_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value2_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value2_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value2_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value2_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value2_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value2_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value2_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value2_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value2_get_schema(), cfg);
}

/* mdash.value3 type struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value3_get_schema(void);
void mgos_config_mdash_value3_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value3_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value3_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value3_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value3_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value3_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value3_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value3_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value3_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value3_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value3_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value3_get_schema(), cfg);
}

/* mdash.value4 type struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value4_get_schema(void);
void mgos_config_mdash_value4_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value4_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value4_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value4_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value4_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value4_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value4_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value4_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value4_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value4_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value4_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value4_get_schema(), cfg);
}

/* mdash.value5 type struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value5_get_schema(void);
void mgos_config_mdash_value5_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value5_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value5_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value5_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value5_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value5_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value5_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value5_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value5_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value5_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value5_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value5_get_schema(), cfg);
}

/* mdash.value6 type struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value6_get_schema(void);
void mgos_config_mdash_value6_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value6_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value6_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value6_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value6_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value6_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value6_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value6_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value6_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value6_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value6_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value6_get_schema(), cfg);
}

/* mdash.value7 type struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value7_get_schema(void);
void mgos_config_mdash_value7_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value7_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value7_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value7_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value7_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value7_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value7_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value7_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value7_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value7_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value7_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value7_get_schema(), cfg);
}

/* mdash.value8 type struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value8_get_schema(void);
void mgos_config_mdash_value8_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value8_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value8_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value8_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value8_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value8_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value8_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value8_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value8_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value8_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value8_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value8_get_schema(), cfg);
}

/* mdash.value9 type struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value9_get_schema(void);
void mgos_config_mdash_value9_set_defaults(struct mgos_config_mdash_value *cfg);
static inline bool mgos_config_mdash_value9_parse(struct mg_str json, struct mgos_config_mdash_value *cfg) {
  mgos_config_mdash_value9_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_value9_get_schema(), cfg);
}
static inline bool mgos_config_mdash_value9_emit(const struct mgos_config_mdash_value *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_value9_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_value9_emit_f(const struct mgos_config_mdash_value *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_value9_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_value9_copy(const struct mgos_config_mdash_value *src, struct mgos_config_mdash_value *dst) {
  return mgos_conf_copy(mgos_config_mdash_value9_get_schema(), src, dst);
}
static inline void mgos_config_mdash_value9_free(struct mgos_config_mdash_value *cfg) {
  return mgos_conf_free(mgos_config_mdash_value9_get_schema(), cfg);
}

/* mdash.input type struct mgos_config_mdash_input */
struct mgos_config_mdash_input {
  int enable;
  const char * title;
  const char * key;
};
const struct mgos_conf_entry *mgos_config_mdash_input_get_schema(void);
void mgos_config_mdash_input_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input_get_schema(), cfg);
}

/* mdash.input1 type struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input1_get_schema(void);
void mgos_config_mdash_input1_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input1_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input1_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input1_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input1_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input1_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input1_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input1_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input1_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input1_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input1_get_schema(), cfg);
}

/* mdash.input2 type struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input2_get_schema(void);
void mgos_config_mdash_input2_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input2_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input2_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input2_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input2_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input2_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input2_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input2_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input2_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input2_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input2_get_schema(), cfg);
}

/* mdash.input3 type struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input3_get_schema(void);
void mgos_config_mdash_input3_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input3_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input3_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input3_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input3_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input3_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input3_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input3_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input3_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input3_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input3_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input3_get_schema(), cfg);
}

/* mdash.input4 type struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input4_get_schema(void);
void mgos_config_mdash_input4_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input4_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input4_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input4_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input4_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input4_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input4_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input4_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input4_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input4_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input4_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input4_get_schema(), cfg);
}

/* mdash.input5 type struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input5_get_schema(void);
void mgos_config_mdash_input5_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input5_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input5_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input5_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input5_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input5_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input5_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input5_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input5_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input5_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input5_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input5_get_schema(), cfg);
}

/* mdash.input6 type struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input6_get_schema(void);
void mgos_config_mdash_input6_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input6_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input6_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input6_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input6_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input6_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input6_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input6_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input6_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input6_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input6_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input6_get_schema(), cfg);
}

/* mdash.input7 type struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input7_get_schema(void);
void mgos_config_mdash_input7_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input7_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input7_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input7_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input7_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input7_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input7_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input7_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input7_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input7_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input7_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input7_get_schema(), cfg);
}

/* mdash.input8 type struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input8_get_schema(void);
void mgos_config_mdash_input8_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input8_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input8_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input8_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input8_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input8_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input8_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input8_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input8_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input8_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input8_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input8_get_schema(), cfg);
}

/* mdash.input9 type struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input9_get_schema(void);
void mgos_config_mdash_input9_set_defaults(struct mgos_config_mdash_input *cfg);
static inline bool mgos_config_mdash_input9_parse(struct mg_str json, struct mgos_config_mdash_input *cfg) {
  mgos_config_mdash_input9_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_input9_get_schema(), cfg);
}
static inline bool mgos_config_mdash_input9_emit(const struct mgos_config_mdash_input *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_input9_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_input9_emit_f(const struct mgos_config_mdash_input *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_input9_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_input9_copy(const struct mgos_config_mdash_input *src, struct mgos_config_mdash_input *dst) {
  return mgos_conf_copy(mgos_config_mdash_input9_get_schema(), src, dst);
}
static inline void mgos_config_mdash_input9_free(struct mgos_config_mdash_input *cfg) {
  return mgos_conf_free(mgos_config_mdash_input9_get_schema(), cfg);
}

/* mdash.toggle type struct mgos_config_mdash_toggle */
struct mgos_config_mdash_toggle {
  int enable;
  const char * title;
  const char * key;
};
const struct mgos_conf_entry *mgos_config_mdash_toggle_get_schema(void);
void mgos_config_mdash_toggle_set_defaults(struct mgos_config_mdash_toggle *cfg);
static inline bool mgos_config_mdash_toggle_parse(struct mg_str json, struct mgos_config_mdash_toggle *cfg) {
  mgos_config_mdash_toggle_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_toggle_get_schema(), cfg);
}
static inline bool mgos_config_mdash_toggle_emit(const struct mgos_config_mdash_toggle *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_toggle_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_toggle_emit_f(const struct mgos_config_mdash_toggle *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_toggle_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_toggle_copy(const struct mgos_config_mdash_toggle *src, struct mgos_config_mdash_toggle *dst) {
  return mgos_conf_copy(mgos_config_mdash_toggle_get_schema(), src, dst);
}
static inline void mgos_config_mdash_toggle_free(struct mgos_config_mdash_toggle *cfg) {
  return mgos_conf_free(mgos_config_mdash_toggle_get_schema(), cfg);
}

/* mdash.toggle1 type struct mgos_config_mdash_toggle */
const struct mgos_conf_entry *mgos_config_mdash_toggle1_get_schema(void);
void mgos_config_mdash_toggle1_set_defaults(struct mgos_config_mdash_toggle *cfg);
static inline bool mgos_config_mdash_toggle1_parse(struct mg_str json, struct mgos_config_mdash_toggle *cfg) {
  mgos_config_mdash_toggle1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_toggle1_get_schema(), cfg);
}
static inline bool mgos_config_mdash_toggle1_emit(const struct mgos_config_mdash_toggle *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_toggle1_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_toggle1_emit_f(const struct mgos_config_mdash_toggle *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_toggle1_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_toggle1_copy(const struct mgos_config_mdash_toggle *src, struct mgos_config_mdash_toggle *dst) {
  return mgos_conf_copy(mgos_config_mdash_toggle1_get_schema(), src, dst);
}
static inline void mgos_config_mdash_toggle1_free(struct mgos_config_mdash_toggle *cfg) {
  return mgos_conf_free(mgos_config_mdash_toggle1_get_schema(), cfg);
}

/* mdash.toggle2 type struct mgos_config_mdash_toggle */
const struct mgos_conf_entry *mgos_config_mdash_toggle2_get_schema(void);
void mgos_config_mdash_toggle2_set_defaults(struct mgos_config_mdash_toggle *cfg);
static inline bool mgos_config_mdash_toggle2_parse(struct mg_str json, struct mgos_config_mdash_toggle *cfg) {
  mgos_config_mdash_toggle2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_toggle2_get_schema(), cfg);
}
static inline bool mgos_config_mdash_toggle2_emit(const struct mgos_config_mdash_toggle *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_toggle2_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_toggle2_emit_f(const struct mgos_config_mdash_toggle *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_toggle2_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_toggle2_copy(const struct mgos_config_mdash_toggle *src, struct mgos_config_mdash_toggle *dst) {
  return mgos_conf_copy(mgos_config_mdash_toggle2_get_schema(), src, dst);
}
static inline void mgos_config_mdash_toggle2_free(struct mgos_config_mdash_toggle *cfg) {
  return mgos_conf_free(mgos_config_mdash_toggle2_get_schema(), cfg);
}

/* mdash.button type struct mgos_config_mdash_button */
struct mgos_config_mdash_button {
  int enable;
  const char * title;
  const char * method;
  const char * params;
  const char * icon;
};
const struct mgos_conf_entry *mgos_config_mdash_button_get_schema(void);
void mgos_config_mdash_button_set_defaults(struct mgos_config_mdash_button *cfg);
static inline bool mgos_config_mdash_button_parse(struct mg_str json, struct mgos_config_mdash_button *cfg) {
  mgos_config_mdash_button_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_button_get_schema(), cfg);
}
static inline bool mgos_config_mdash_button_emit(const struct mgos_config_mdash_button *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_button_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_button_emit_f(const struct mgos_config_mdash_button *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_button_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_button_copy(const struct mgos_config_mdash_button *src, struct mgos_config_mdash_button *dst) {
  return mgos_conf_copy(mgos_config_mdash_button_get_schema(), src, dst);
}
static inline void mgos_config_mdash_button_free(struct mgos_config_mdash_button *cfg) {
  return mgos_conf_free(mgos_config_mdash_button_get_schema(), cfg);
}

/* mdash.button1 type struct mgos_config_mdash_button */
const struct mgos_conf_entry *mgos_config_mdash_button1_get_schema(void);
void mgos_config_mdash_button1_set_defaults(struct mgos_config_mdash_button *cfg);
static inline bool mgos_config_mdash_button1_parse(struct mg_str json, struct mgos_config_mdash_button *cfg) {
  mgos_config_mdash_button1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_button1_get_schema(), cfg);
}
static inline bool mgos_config_mdash_button1_emit(const struct mgos_config_mdash_button *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_button1_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_button1_emit_f(const struct mgos_config_mdash_button *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_button1_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_button1_copy(const struct mgos_config_mdash_button *src, struct mgos_config_mdash_button *dst) {
  return mgos_conf_copy(mgos_config_mdash_button1_get_schema(), src, dst);
}
static inline void mgos_config_mdash_button1_free(struct mgos_config_mdash_button *cfg) {
  return mgos_conf_free(mgos_config_mdash_button1_get_schema(), cfg);
}

/* mdash.button2 type struct mgos_config_mdash_button */
const struct mgos_conf_entry *mgos_config_mdash_button2_get_schema(void);
void mgos_config_mdash_button2_set_defaults(struct mgos_config_mdash_button *cfg);
static inline bool mgos_config_mdash_button2_parse(struct mg_str json, struct mgos_config_mdash_button *cfg) {
  mgos_config_mdash_button2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_button2_get_schema(), cfg);
}
static inline bool mgos_config_mdash_button2_emit(const struct mgos_config_mdash_button *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_button2_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_button2_emit_f(const struct mgos_config_mdash_button *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_button2_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_button2_copy(const struct mgos_config_mdash_button *src, struct mgos_config_mdash_button *dst) {
  return mgos_conf_copy(mgos_config_mdash_button2_get_schema(), src, dst);
}
static inline void mgos_config_mdash_button2_free(struct mgos_config_mdash_button *cfg) {
  return mgos_conf_free(mgos_config_mdash_button2_get_schema(), cfg);
}

/* mdash type struct mgos_config_mdash */
struct mgos_config_mdash {
  const char * device_id;
  const char * api_key;
  struct mgos_config_mdash_value value;
  struct mgos_config_mdash_value value1;
  struct mgos_config_mdash_value value2;
  struct mgos_config_mdash_value value3;
  struct mgos_config_mdash_value value4;
  struct mgos_config_mdash_value value5;
  struct mgos_config_mdash_value value6;
  struct mgos_config_mdash_value value7;
  struct mgos_config_mdash_value value8;
  struct mgos_config_mdash_value value9;
  struct mgos_config_mdash_input input;
  struct mgos_config_mdash_input input1;
  struct mgos_config_mdash_input input2;
  struct mgos_config_mdash_input input3;
  struct mgos_config_mdash_input input4;
  struct mgos_config_mdash_input input5;
  struct mgos_config_mdash_input input6;
  struct mgos_config_mdash_input input7;
  struct mgos_config_mdash_input input8;
  struct mgos_config_mdash_input input9;
  struct mgos_config_mdash_toggle toggle;
  struct mgos_config_mdash_toggle toggle1;
  struct mgos_config_mdash_toggle toggle2;
  struct mgos_config_mdash_button button;
  struct mgos_config_mdash_button button1;
  struct mgos_config_mdash_button button2;
};
const struct mgos_conf_entry *mgos_config_mdash_get_schema(void);
void mgos_config_mdash_set_defaults(struct mgos_config_mdash *cfg);
static inline bool mgos_config_mdash_parse(struct mg_str json, struct mgos_config_mdash *cfg) {
  mgos_config_mdash_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mdash_get_schema(), cfg);
}
static inline bool mgos_config_mdash_emit(const struct mgos_config_mdash *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mdash_get_schema(), pretty, out);
}
static inline bool mgos_config_mdash_emit_f(const struct mgos_config_mdash *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mdash_get_schema(), pretty, fname);
}
static inline bool mgos_config_mdash_copy(const struct mgos_config_mdash *src, struct mgos_config_mdash *dst) {
  return mgos_conf_copy(mgos_config_mdash_get_schema(), src, dst);
}
static inline void mgos_config_mdash_free(struct mgos_config_mdash *cfg) {
  return mgos_conf_free(mgos_config_mdash_get_schema(), cfg);
}

/* rpc.uart type struct mgos_config_rpc_uart */
struct mgos_config_rpc_uart {
  int uart_no;
  int baud_rate;
  int fc_type;
  const char * dst;
};
const struct mgos_conf_entry *mgos_config_rpc_uart_get_schema(void);
void mgos_config_rpc_uart_set_defaults(struct mgos_config_rpc_uart *cfg);
static inline bool mgos_config_rpc_uart_parse(struct mg_str json, struct mgos_config_rpc_uart *cfg) {
  mgos_config_rpc_uart_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_uart_get_schema(), cfg);
}
static inline bool mgos_config_rpc_uart_emit(const struct mgos_config_rpc_uart *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_uart_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_uart_emit_f(const struct mgos_config_rpc_uart *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_uart_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_uart_copy(const struct mgos_config_rpc_uart *src, struct mgos_config_rpc_uart *dst) {
  return mgos_conf_copy(mgos_config_rpc_uart_get_schema(), src, dst);
}
static inline void mgos_config_rpc_uart_free(struct mgos_config_rpc_uart *cfg) {
  return mgos_conf_free(mgos_config_rpc_uart_get_schema(), cfg);
}

/* rpc.ws type struct mgos_config_rpc_ws */
struct mgos_config_rpc_ws {
  int enable;
  const char * server_address;
  int reconnect_interval_min;
  int reconnect_interval_max;
  const char * ssl_server_name;
  const char * ssl_cert;
  const char * ssl_key;
  const char * ssl_ca_cert;
};
const struct mgos_conf_entry *mgos_config_rpc_ws_get_schema(void);
void mgos_config_rpc_ws_set_defaults(struct mgos_config_rpc_ws *cfg);
static inline bool mgos_config_rpc_ws_parse(struct mg_str json, struct mgos_config_rpc_ws *cfg) {
  mgos_config_rpc_ws_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_ws_get_schema(), cfg);
}
static inline bool mgos_config_rpc_ws_emit(const struct mgos_config_rpc_ws *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_ws_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_ws_emit_f(const struct mgos_config_rpc_ws *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_ws_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_ws_copy(const struct mgos_config_rpc_ws *src, struct mgos_config_rpc_ws *dst) {
  return mgos_conf_copy(mgos_config_rpc_ws_get_schema(), src, dst);
}
static inline void mgos_config_rpc_ws_free(struct mgos_config_rpc_ws *cfg) {
  return mgos_conf_free(mgos_config_rpc_ws_get_schema(), cfg);
}

/* rpc type struct mgos_config_rpc */
struct mgos_config_rpc {
  int enable;
  int http_enable;
  int service_sys_enable;
  int max_frame_size;
  int max_queue_length;
  int default_out_channel_idle_close_timeout;
  const char * acl_file;
  const char * auth_domain;
  const char * auth_file;
  struct mgos_config_rpc_uart uart;
  struct mgos_config_rpc_ws ws;
};
const struct mgos_conf_entry *mgos_config_rpc_get_schema(void);
void mgos_config_rpc_set_defaults(struct mgos_config_rpc *cfg);
static inline bool mgos_config_rpc_parse(struct mg_str json, struct mgos_config_rpc *cfg) {
  mgos_config_rpc_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_get_schema(), cfg);
}
static inline bool mgos_config_rpc_emit(const struct mgos_config_rpc *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_emit_f(const struct mgos_config_rpc *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_copy(const struct mgos_config_rpc *src, struct mgos_config_rpc *dst) {
  return mgos_conf_copy(mgos_config_rpc_get_schema(), src, dst);
}
static inline void mgos_config_rpc_free(struct mgos_config_rpc *cfg) {
  return mgos_conf_free(mgos_config_rpc_get_schema(), cfg);
}

/* wifi.ap type struct mgos_config_wifi_ap */
struct mgos_config_wifi_ap {
  int enable;
  const char * ssid;
  const char * pass;
  int hidden;
  int channel;
  int max_connections;
  const char * ip;
  const char * netmask;
  const char * gw;
  const char * dhcp_start;
  const char * dhcp_end;
  int trigger_on_gpio;
  int disable_after;
  const char * hostname;
  int keep_enabled;
};
const struct mgos_conf_entry *mgos_config_wifi_ap_get_schema(void);
void mgos_config_wifi_ap_set_defaults(struct mgos_config_wifi_ap *cfg);
static inline bool mgos_config_wifi_ap_parse(struct mg_str json, struct mgos_config_wifi_ap *cfg) {
  mgos_config_wifi_ap_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_ap_get_schema(), cfg);
}
static inline bool mgos_config_wifi_ap_emit(const struct mgos_config_wifi_ap *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_ap_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_ap_emit_f(const struct mgos_config_wifi_ap *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_ap_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_ap_copy(const struct mgos_config_wifi_ap *src, struct mgos_config_wifi_ap *dst) {
  return mgos_conf_copy(mgos_config_wifi_ap_get_schema(), src, dst);
}
static inline void mgos_config_wifi_ap_free(struct mgos_config_wifi_ap *cfg) {
  return mgos_conf_free(mgos_config_wifi_ap_get_schema(), cfg);
}

/* wifi.sta type struct mgos_config_wifi_sta */
struct mgos_config_wifi_sta {
  int enable;
  const char * ssid;
  const char * pass;
  const char * user;
  const char * anon_identity;
  const char * cert;
  const char * key;
  const char * ca_cert;
  const char * ip;
  const char * netmask;
  const char * gw;
  const char * nameserver;
  const char * dhcp_hostname;
};
const struct mgos_conf_entry *mgos_config_wifi_sta_get_schema(void);
void mgos_config_wifi_sta_set_defaults(struct mgos_config_wifi_sta *cfg);
static inline bool mgos_config_wifi_sta_parse(struct mg_str json, struct mgos_config_wifi_sta *cfg) {
  mgos_config_wifi_sta_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_sta_get_schema(), cfg);
}
static inline bool mgos_config_wifi_sta_emit(const struct mgos_config_wifi_sta *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_sta_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_sta_emit_f(const struct mgos_config_wifi_sta *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_sta_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_sta_copy(const struct mgos_config_wifi_sta *src, struct mgos_config_wifi_sta *dst) {
  return mgos_conf_copy(mgos_config_wifi_sta_get_schema(), src, dst);
}
static inline void mgos_config_wifi_sta_free(struct mgos_config_wifi_sta *cfg) {
  return mgos_conf_free(mgos_config_wifi_sta_get_schema(), cfg);
}

/* wifi.sta1 type struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta1_get_schema(void);
void mgos_config_wifi_sta1_set_defaults(struct mgos_config_wifi_sta *cfg);
static inline bool mgos_config_wifi_sta1_parse(struct mg_str json, struct mgos_config_wifi_sta *cfg) {
  mgos_config_wifi_sta1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_sta1_get_schema(), cfg);
}
static inline bool mgos_config_wifi_sta1_emit(const struct mgos_config_wifi_sta *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_sta1_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_sta1_emit_f(const struct mgos_config_wifi_sta *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_sta1_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_sta1_copy(const struct mgos_config_wifi_sta *src, struct mgos_config_wifi_sta *dst) {
  return mgos_conf_copy(mgos_config_wifi_sta1_get_schema(), src, dst);
}
static inline void mgos_config_wifi_sta1_free(struct mgos_config_wifi_sta *cfg) {
  return mgos_conf_free(mgos_config_wifi_sta1_get_schema(), cfg);
}

/* wifi.sta2 type struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta2_get_schema(void);
void mgos_config_wifi_sta2_set_defaults(struct mgos_config_wifi_sta *cfg);
static inline bool mgos_config_wifi_sta2_parse(struct mg_str json, struct mgos_config_wifi_sta *cfg) {
  mgos_config_wifi_sta2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_sta2_get_schema(), cfg);
}
static inline bool mgos_config_wifi_sta2_emit(const struct mgos_config_wifi_sta *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_sta2_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_sta2_emit_f(const struct mgos_config_wifi_sta *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_sta2_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_sta2_copy(const struct mgos_config_wifi_sta *src, struct mgos_config_wifi_sta *dst) {
  return mgos_conf_copy(mgos_config_wifi_sta2_get_schema(), src, dst);
}
static inline void mgos_config_wifi_sta2_free(struct mgos_config_wifi_sta *cfg) {
  return mgos_conf_free(mgos_config_wifi_sta2_get_schema(), cfg);
}

/* wifi type struct mgos_config_wifi */
struct mgos_config_wifi {
  struct mgos_config_wifi_ap ap;
  struct mgos_config_wifi_sta sta;
  struct mgos_config_wifi_sta sta1;
  struct mgos_config_wifi_sta sta2;
  int sta_cfg_idx;
  int sta_connect_timeout;
  int sta_all_chan_scan;
};
const struct mgos_conf_entry *mgos_config_wifi_get_schema(void);
void mgos_config_wifi_set_defaults(struct mgos_config_wifi *cfg);
static inline bool mgos_config_wifi_parse(struct mg_str json, struct mgos_config_wifi *cfg) {
  mgos_config_wifi_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_get_schema(), cfg);
}
static inline bool mgos_config_wifi_emit(const struct mgos_config_wifi *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_emit_f(const struct mgos_config_wifi *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_copy(const struct mgos_config_wifi *src, struct mgos_config_wifi *dst) {
  return mgos_conf_copy(mgos_config_wifi_get_schema(), src, dst);
}
static inline void mgos_config_wifi_free(struct mgos_config_wifi *cfg) {
  return mgos_conf_free(mgos_config_wifi_get_schema(), cfg);
}

/* board.led1 type struct mgos_config_board_led1 */
struct mgos_config_board_led1 {
  int pin;
  int active_high;
};
const struct mgos_conf_entry *mgos_config_board_led1_get_schema(void);
void mgos_config_board_led1_set_defaults(struct mgos_config_board_led1 *cfg);
static inline bool mgos_config_board_led1_parse(struct mg_str json, struct mgos_config_board_led1 *cfg) {
  mgos_config_board_led1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_led1_get_schema(), cfg);
}
static inline bool mgos_config_board_led1_emit(const struct mgos_config_board_led1 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_led1_get_schema(), pretty, out);
}
static inline bool mgos_config_board_led1_emit_f(const struct mgos_config_board_led1 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_led1_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_led1_copy(const struct mgos_config_board_led1 *src, struct mgos_config_board_led1 *dst) {
  return mgos_conf_copy(mgos_config_board_led1_get_schema(), src, dst);
}
static inline void mgos_config_board_led1_free(struct mgos_config_board_led1 *cfg) {
  return mgos_conf_free(mgos_config_board_led1_get_schema(), cfg);
}

/* board.led2 type struct mgos_config_board_led2 */
struct mgos_config_board_led2 {
  int pin;
  int active_high;
};
const struct mgos_conf_entry *mgos_config_board_led2_get_schema(void);
void mgos_config_board_led2_set_defaults(struct mgos_config_board_led2 *cfg);
static inline bool mgos_config_board_led2_parse(struct mg_str json, struct mgos_config_board_led2 *cfg) {
  mgos_config_board_led2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_led2_get_schema(), cfg);
}
static inline bool mgos_config_board_led2_emit(const struct mgos_config_board_led2 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_led2_get_schema(), pretty, out);
}
static inline bool mgos_config_board_led2_emit_f(const struct mgos_config_board_led2 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_led2_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_led2_copy(const struct mgos_config_board_led2 *src, struct mgos_config_board_led2 *dst) {
  return mgos_conf_copy(mgos_config_board_led2_get_schema(), src, dst);
}
static inline void mgos_config_board_led2_free(struct mgos_config_board_led2 *cfg) {
  return mgos_conf_free(mgos_config_board_led2_get_schema(), cfg);
}

/* board.led3 type struct mgos_config_board_led3 */
struct mgos_config_board_led3 {
  int pin;
  int active_high;
};
const struct mgos_conf_entry *mgos_config_board_led3_get_schema(void);
void mgos_config_board_led3_set_defaults(struct mgos_config_board_led3 *cfg);
static inline bool mgos_config_board_led3_parse(struct mg_str json, struct mgos_config_board_led3 *cfg) {
  mgos_config_board_led3_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_led3_get_schema(), cfg);
}
static inline bool mgos_config_board_led3_emit(const struct mgos_config_board_led3 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_led3_get_schema(), pretty, out);
}
static inline bool mgos_config_board_led3_emit_f(const struct mgos_config_board_led3 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_led3_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_led3_copy(const struct mgos_config_board_led3 *src, struct mgos_config_board_led3 *dst) {
  return mgos_conf_copy(mgos_config_board_led3_get_schema(), src, dst);
}
static inline void mgos_config_board_led3_free(struct mgos_config_board_led3 *cfg) {
  return mgos_conf_free(mgos_config_board_led3_get_schema(), cfg);
}

/* board.btn1 type struct mgos_config_board_btn1 */
struct mgos_config_board_btn1 {
  int pin;
  int pull_up;
};
const struct mgos_conf_entry *mgos_config_board_btn1_get_schema(void);
void mgos_config_board_btn1_set_defaults(struct mgos_config_board_btn1 *cfg);
static inline bool mgos_config_board_btn1_parse(struct mg_str json, struct mgos_config_board_btn1 *cfg) {
  mgos_config_board_btn1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_btn1_get_schema(), cfg);
}
static inline bool mgos_config_board_btn1_emit(const struct mgos_config_board_btn1 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_btn1_get_schema(), pretty, out);
}
static inline bool mgos_config_board_btn1_emit_f(const struct mgos_config_board_btn1 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_btn1_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_btn1_copy(const struct mgos_config_board_btn1 *src, struct mgos_config_board_btn1 *dst) {
  return mgos_conf_copy(mgos_config_board_btn1_get_schema(), src, dst);
}
static inline void mgos_config_board_btn1_free(struct mgos_config_board_btn1 *cfg) {
  return mgos_conf_free(mgos_config_board_btn1_get_schema(), cfg);
}

/* board.btn2 type struct mgos_config_board_btn2 */
struct mgos_config_board_btn2 {
  int pin;
  int pull_up;
};
const struct mgos_conf_entry *mgos_config_board_btn2_get_schema(void);
void mgos_config_board_btn2_set_defaults(struct mgos_config_board_btn2 *cfg);
static inline bool mgos_config_board_btn2_parse(struct mg_str json, struct mgos_config_board_btn2 *cfg) {
  mgos_config_board_btn2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_btn2_get_schema(), cfg);
}
static inline bool mgos_config_board_btn2_emit(const struct mgos_config_board_btn2 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_btn2_get_schema(), pretty, out);
}
static inline bool mgos_config_board_btn2_emit_f(const struct mgos_config_board_btn2 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_btn2_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_btn2_copy(const struct mgos_config_board_btn2 *src, struct mgos_config_board_btn2 *dst) {
  return mgos_conf_copy(mgos_config_board_btn2_get_schema(), src, dst);
}
static inline void mgos_config_board_btn2_free(struct mgos_config_board_btn2 *cfg) {
  return mgos_conf_free(mgos_config_board_btn2_get_schema(), cfg);
}

/* board.btn3 type struct mgos_config_board_btn3 */
struct mgos_config_board_btn3 {
  int pin;
  int pull_up;
};
const struct mgos_conf_entry *mgos_config_board_btn3_get_schema(void);
void mgos_config_board_btn3_set_defaults(struct mgos_config_board_btn3 *cfg);
static inline bool mgos_config_board_btn3_parse(struct mg_str json, struct mgos_config_board_btn3 *cfg) {
  mgos_config_board_btn3_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_btn3_get_schema(), cfg);
}
static inline bool mgos_config_board_btn3_emit(const struct mgos_config_board_btn3 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_btn3_get_schema(), pretty, out);
}
static inline bool mgos_config_board_btn3_emit_f(const struct mgos_config_board_btn3 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_btn3_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_btn3_copy(const struct mgos_config_board_btn3 *src, struct mgos_config_board_btn3 *dst) {
  return mgos_conf_copy(mgos_config_board_btn3_get_schema(), src, dst);
}
static inline void mgos_config_board_btn3_free(struct mgos_config_board_btn3 *cfg) {
  return mgos_conf_free(mgos_config_board_btn3_get_schema(), cfg);
}

/* board type struct mgos_config_board */
struct mgos_config_board {
  struct mgos_config_board_led1 led1;
  struct mgos_config_board_led2 led2;
  struct mgos_config_board_led3 led3;
  struct mgos_config_board_btn1 btn1;
  struct mgos_config_board_btn2 btn2;
  struct mgos_config_board_btn3 btn3;
};
const struct mgos_conf_entry *mgos_config_board_get_schema(void);
void mgos_config_board_set_defaults(struct mgos_config_board *cfg);
static inline bool mgos_config_board_parse(struct mg_str json, struct mgos_config_board *cfg) {
  mgos_config_board_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_get_schema(), cfg);
}
static inline bool mgos_config_board_emit(const struct mgos_config_board *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_get_schema(), pretty, out);
}
static inline bool mgos_config_board_emit_f(const struct mgos_config_board *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_copy(const struct mgos_config_board *src, struct mgos_config_board *dst) {
  return mgos_conf_copy(mgos_config_board_get_schema(), src, dst);
}
static inline void mgos_config_board_free(struct mgos_config_board *cfg) {
  return mgos_conf_free(mgos_config_board_get_schema(), cfg);
}

/* <root> type struct mgos_config */
struct mgos_config {
  struct mgos_config_debug debug;
  struct mgos_config_device device;
  struct mgos_config_sys sys;
  const char * conf_acl;
  struct mgos_config_http http;
  struct mgos_config_mdash mdash;
  struct mgos_config_rpc rpc;
  struct mgos_config_wifi wifi;
  struct mgos_config_board board;
};
const struct mgos_conf_entry *mgos_config_get_schema(void);
void mgos_config_set_defaults(struct mgos_config *cfg);
static inline bool mgos_config_parse(struct mg_str json, struct mgos_config *cfg) {
  mgos_config_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_get_schema(), cfg);
}
static inline bool mgos_config_emit(const struct mgos_config *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_get_schema(), pretty, out);
}
static inline bool mgos_config_emit_f(const struct mgos_config *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_get_schema(), pretty, fname);
}
static inline bool mgos_config_copy(const struct mgos_config *src, struct mgos_config *dst) {
  return mgos_conf_copy(mgos_config_get_schema(), src, dst);
}
static inline void mgos_config_free(struct mgos_config *cfg) {
  return mgos_conf_free(mgos_config_get_schema(), cfg);
}

extern struct mgos_config mgos_sys_config;

/* debug */
#define MGOS_CONFIG_HAVE_DEBUG
#define MGOS_SYS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug *mgos_config_get_debug(const struct mgos_config *cfg);
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }

/* debug.udp_log_addr */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char * mgos_config_get_debug_udp_log_addr(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_udp_log_addr(void);
static inline const char * mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_udp_log_addr(void) { return mgos_config_get_default_debug_udp_log_addr(); }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_udp_log_addr(const char * v) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, v); }

/* debug.udp_log_level */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
int mgos_config_get_debug_udp_log_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_udp_log_level(void);
static inline int mgos_sys_config_get_debug_udp_log_level(void) { return mgos_config_get_debug_udp_log_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_udp_log_level(void) { return mgos_config_get_default_debug_udp_log_level(); }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_udp_log_level(int v) { mgos_config_set_debug_udp_log_level(&mgos_sys_config, v); }

/* debug.mbedtls_level */
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int mgos_config_get_debug_mbedtls_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_mbedtls_level(void);
static inline int mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_mbedtls_level(void) { return mgos_config_get_default_debug_mbedtls_level(); }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_mbedtls_level(int v) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, v); }

/* debug.level */
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
int mgos_config_get_debug_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_level(void);
static inline int mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_level(void) { return mgos_config_get_default_debug_level(); }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_level(int v) { mgos_config_set_debug_level(&mgos_sys_config, v); }

/* debug.file_level */
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char * mgos_config_get_debug_file_level(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_file_level(void);
static inline const char * mgos_sys_config_get_debug_file_level(void) { return mgos_config_get_debug_file_level(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_file_level(void) { return mgos_config_get_default_debug_file_level(); }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_file_level(const char * v) { mgos_config_set_debug_file_level(&mgos_sys_config, v); }

/* debug.event_level */
#define MGOS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
int mgos_config_get_debug_event_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_event_level(void);
static inline int mgos_sys_config_get_debug_event_level(void) { return mgos_config_get_debug_event_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_event_level(void) { return mgos_config_get_default_debug_event_level(); }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_event_level(int v) { mgos_config_set_debug_event_level(&mgos_sys_config, v); }

/* debug.stdout_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
int mgos_config_get_debug_stdout_uart(const struct mgos_config *cfg);
int mgos_config_get_default_debug_stdout_uart(void);
static inline int mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_stdout_uart(void) { return mgos_config_get_default_debug_stdout_uart(); }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stdout_uart(int v) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, v); }

/* debug.stderr_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
int mgos_config_get_debug_stderr_uart(const struct mgos_config *cfg);
int mgos_config_get_default_debug_stderr_uart(void);
static inline int mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_stderr_uart(void) { return mgos_config_get_default_debug_stderr_uart(); }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stderr_uart(int v) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, v); }

/* debug.factory_reset_gpio */
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int mgos_config_get_debug_factory_reset_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_debug_factory_reset_gpio(void);
static inline int mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_factory_reset_gpio(void) { return mgos_config_get_default_debug_factory_reset_gpio(); }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int v) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, v); }

/* debug.mg_mgr_hexdump_file */
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char * mgos_config_get_debug_mg_mgr_hexdump_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_mg_mgr_hexdump_file(void);
static inline const char * mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_default_debug_mg_mgr_hexdump_file(); }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char * v) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, v); }

/* device */
#define MGOS_CONFIG_HAVE_DEVICE
#define MGOS_SYS_CONFIG_HAVE_DEVICE
const struct mgos_config_device *mgos_config_get_device(const struct mgos_config *cfg);
static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }

/* device.id */
#define MGOS_CONFIG_HAVE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
const char * mgos_config_get_device_id(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_id(void);
static inline const char * mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_id(void) { return mgos_config_get_default_device_id(); }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_id(const char * v) { mgos_config_set_device_id(&mgos_sys_config, v); }

/* device.license */
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
const char * mgos_config_get_device_license(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_license(void);
static inline const char * mgos_sys_config_get_device_license(void) { return mgos_config_get_device_license(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_license(void) { return mgos_config_get_default_device_license(); }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_license(const char * v) { mgos_config_set_device_license(&mgos_sys_config, v); }

/* device.mac */
#define MGOS_CONFIG_HAVE_DEVICE_MAC
#define MGOS_SYS_CONFIG_HAVE_DEVICE_MAC
const char * mgos_config_get_device_mac(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_mac(void);
static inline const char * mgos_sys_config_get_device_mac(void) { return mgos_config_get_device_mac(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_mac(void) { return mgos_config_get_default_device_mac(); }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_mac(const char * v) { mgos_config_set_device_mac(&mgos_sys_config, v); }

/* device.public_key */
#define MGOS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
#define MGOS_SYS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
const char * mgos_config_get_device_public_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_public_key(void);
static inline const char * mgos_sys_config_get_device_public_key(void) { return mgos_config_get_device_public_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_public_key(void) { return mgos_config_get_default_device_public_key(); }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_public_key(const char * v) { mgos_config_set_device_public_key(&mgos_sys_config, v); }

/* device.sn */
#define MGOS_CONFIG_HAVE_DEVICE_SN
#define MGOS_SYS_CONFIG_HAVE_DEVICE_SN
const char * mgos_config_get_device_sn(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_sn(void);
static inline const char * mgos_sys_config_get_device_sn(void) { return mgos_config_get_device_sn(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_sn(void) { return mgos_config_get_default_device_sn(); }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_sn(const char * v) { mgos_config_set_device_sn(&mgos_sys_config, v); }

/* sys */
#define MGOS_CONFIG_HAVE_SYS
#define MGOS_SYS_CONFIG_HAVE_SYS
const struct mgos_config_sys *mgos_config_get_sys(const struct mgos_config *cfg);
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }

/* sys.tz_spec */
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
const char * mgos_config_get_sys_tz_spec(const struct mgos_config *cfg);
const char * mgos_config_get_default_sys_tz_spec(void);
static inline const char * mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_sys_tz_spec(void) { return mgos_config_get_default_sys_tz_spec(); }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_tz_spec(const char * v) { mgos_config_set_sys_tz_spec(&mgos_sys_config, v); }

/* sys.wdt_timeout */
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int mgos_config_get_sys_wdt_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_sys_wdt_timeout(void);
static inline int mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_wdt_timeout(void) { return mgos_config_get_default_sys_wdt_timeout(); }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_wdt_timeout(int v) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, v); }

/* sys.pref_ota_lib */
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char * mgos_config_get_sys_pref_ota_lib(const struct mgos_config *cfg);
const char * mgos_config_get_default_sys_pref_ota_lib(void);
static inline const char * mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_sys_pref_ota_lib(void) { return mgos_config_get_default_sys_pref_ota_lib(); }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char * v) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, v); }

/* conf_acl */
#define MGOS_CONFIG_HAVE_CONF_ACL
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
const char * mgos_config_get_conf_acl(const struct mgos_config *cfg);
const char * mgos_config_get_default_conf_acl(void);
static inline const char * mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_conf_acl(void) { return mgos_config_get_default_conf_acl(); }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_conf_acl(const char * v) { mgos_config_set_conf_acl(&mgos_sys_config, v); }

/* http */
#define MGOS_CONFIG_HAVE_HTTP
#define MGOS_SYS_CONFIG_HAVE_HTTP
const struct mgos_config_http *mgos_config_get_http(const struct mgos_config *cfg);
static inline const struct mgos_config_http *mgos_sys_config_get_http(void) { return mgos_config_get_http(&mgos_sys_config); }

/* http.enable */
#define MGOS_CONFIG_HAVE_HTTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_HTTP_ENABLE
int mgos_config_get_http_enable(const struct mgos_config *cfg);
int mgos_config_get_default_http_enable(void);
static inline int mgos_sys_config_get_http_enable(void) { return mgos_config_get_http_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_http_enable(void) { return mgos_config_get_default_http_enable(); }
void mgos_config_set_http_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_http_enable(int v) { mgos_config_set_http_enable(&mgos_sys_config, v); }

/* http.listen_addr */
#define MGOS_CONFIG_HAVE_HTTP_LISTEN_ADDR
#define MGOS_SYS_CONFIG_HAVE_HTTP_LISTEN_ADDR
const char * mgos_config_get_http_listen_addr(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_listen_addr(void);
static inline const char * mgos_sys_config_get_http_listen_addr(void) { return mgos_config_get_http_listen_addr(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_listen_addr(void) { return mgos_config_get_default_http_listen_addr(); }
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_listen_addr(const char * v) { mgos_config_set_http_listen_addr(&mgos_sys_config, v); }

/* http.document_root */
#define MGOS_CONFIG_HAVE_HTTP_DOCUMENT_ROOT
#define MGOS_SYS_CONFIG_HAVE_HTTP_DOCUMENT_ROOT
const char * mgos_config_get_http_document_root(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_document_root(void);
static inline const char * mgos_sys_config_get_http_document_root(void) { return mgos_config_get_http_document_root(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_document_root(void) { return mgos_config_get_default_http_document_root(); }
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_document_root(const char * v) { mgos_config_set_http_document_root(&mgos_sys_config, v); }

/* http.index_files */
#define MGOS_CONFIG_HAVE_HTTP_INDEX_FILES
#define MGOS_SYS_CONFIG_HAVE_HTTP_INDEX_FILES
const char * mgos_config_get_http_index_files(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_index_files(void);
static inline const char * mgos_sys_config_get_http_index_files(void) { return mgos_config_get_http_index_files(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_index_files(void) { return mgos_config_get_default_http_index_files(); }
void mgos_config_set_http_index_files(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_index_files(const char * v) { mgos_config_set_http_index_files(&mgos_sys_config, v); }

/* http.ssl_cert */
#define MGOS_CONFIG_HAVE_HTTP_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_CERT
const char * mgos_config_get_http_ssl_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_ssl_cert(void);
static inline const char * mgos_sys_config_get_http_ssl_cert(void) { return mgos_config_get_http_ssl_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_ssl_cert(void) { return mgos_config_get_default_http_ssl_cert(); }
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_ssl_cert(const char * v) { mgos_config_set_http_ssl_cert(&mgos_sys_config, v); }

/* http.ssl_key */
#define MGOS_CONFIG_HAVE_HTTP_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_KEY
const char * mgos_config_get_http_ssl_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_ssl_key(void);
static inline const char * mgos_sys_config_get_http_ssl_key(void) { return mgos_config_get_http_ssl_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_ssl_key(void) { return mgos_config_get_default_http_ssl_key(); }
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_ssl_key(const char * v) { mgos_config_set_http_ssl_key(&mgos_sys_config, v); }

/* http.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_HTTP_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_CA_CERT
const char * mgos_config_get_http_ssl_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_ssl_ca_cert(void);
static inline const char * mgos_sys_config_get_http_ssl_ca_cert(void) { return mgos_config_get_http_ssl_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_ssl_ca_cert(void) { return mgos_config_get_default_http_ssl_ca_cert(); }
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_ssl_ca_cert(const char * v) { mgos_config_set_http_ssl_ca_cert(&mgos_sys_config, v); }

/* http.upload_acl */
#define MGOS_CONFIG_HAVE_HTTP_UPLOAD_ACL
#define MGOS_SYS_CONFIG_HAVE_HTTP_UPLOAD_ACL
const char * mgos_config_get_http_upload_acl(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_upload_acl(void);
static inline const char * mgos_sys_config_get_http_upload_acl(void) { return mgos_config_get_http_upload_acl(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_upload_acl(void) { return mgos_config_get_default_http_upload_acl(); }
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_upload_acl(const char * v) { mgos_config_set_http_upload_acl(&mgos_sys_config, v); }

/* http.hidden_files */
#define MGOS_CONFIG_HAVE_HTTP_HIDDEN_FILES
#define MGOS_SYS_CONFIG_HAVE_HTTP_HIDDEN_FILES
const char * mgos_config_get_http_hidden_files(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_hidden_files(void);
static inline const char * mgos_sys_config_get_http_hidden_files(void) { return mgos_config_get_http_hidden_files(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_hidden_files(void) { return mgos_config_get_default_http_hidden_files(); }
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_hidden_files(const char * v) { mgos_config_set_http_hidden_files(&mgos_sys_config, v); }

/* http.auth_domain */
#define MGOS_CONFIG_HAVE_HTTP_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_HTTP_AUTH_DOMAIN
const char * mgos_config_get_http_auth_domain(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_auth_domain(void);
static inline const char * mgos_sys_config_get_http_auth_domain(void) { return mgos_config_get_http_auth_domain(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_auth_domain(void) { return mgos_config_get_default_http_auth_domain(); }
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_auth_domain(const char * v) { mgos_config_set_http_auth_domain(&mgos_sys_config, v); }

/* http.auth_file */
#define MGOS_CONFIG_HAVE_HTTP_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_HTTP_AUTH_FILE
const char * mgos_config_get_http_auth_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_auth_file(void);
static inline const char * mgos_sys_config_get_http_auth_file(void) { return mgos_config_get_http_auth_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_auth_file(void) { return mgos_config_get_default_http_auth_file(); }
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_auth_file(const char * v) { mgos_config_set_http_auth_file(&mgos_sys_config, v); }

/* http.extra_headers */
#define MGOS_CONFIG_HAVE_HTTP_EXTRA_HEADERS
#define MGOS_SYS_CONFIG_HAVE_HTTP_EXTRA_HEADERS
const char * mgos_config_get_http_extra_headers(const struct mgos_config *cfg);
const char * mgos_config_get_default_http_extra_headers(void);
static inline const char * mgos_sys_config_get_http_extra_headers(void) { return mgos_config_get_http_extra_headers(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_http_extra_headers(void) { return mgos_config_get_default_http_extra_headers(); }
void mgos_config_set_http_extra_headers(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_extra_headers(const char * v) { mgos_config_set_http_extra_headers(&mgos_sys_config, v); }

/* mdash */
#define MGOS_CONFIG_HAVE_MDASH
#define MGOS_SYS_CONFIG_HAVE_MDASH
const struct mgos_config_mdash *mgos_config_get_mdash(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash *mgos_sys_config_get_mdash(void) { return mgos_config_get_mdash(&mgos_sys_config); }

/* mdash.device_id */
#define MGOS_CONFIG_HAVE_MDASH_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_MDASH_DEVICE_ID
const char * mgos_config_get_mdash_device_id(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_device_id(void);
static inline const char * mgos_sys_config_get_mdash_device_id(void) { return mgos_config_get_mdash_device_id(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_device_id(void) { return mgos_config_get_default_mdash_device_id(); }
void mgos_config_set_mdash_device_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_device_id(const char * v) { mgos_config_set_mdash_device_id(&mgos_sys_config, v); }

/* mdash.api_key */
#define MGOS_CONFIG_HAVE_MDASH_API_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_API_KEY
const char * mgos_config_get_mdash_api_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_api_key(void);
static inline const char * mgos_sys_config_get_mdash_api_key(void) { return mgos_config_get_mdash_api_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_api_key(void) { return mgos_config_get_default_mdash_api_key(); }
void mgos_config_set_mdash_api_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_api_key(const char * v) { mgos_config_set_mdash_api_key(&mgos_sys_config, v); }

/* mdash.value */
#define MGOS_CONFIG_HAVE_MDASH_VALUE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE
const struct mgos_config_mdash_value *mgos_config_get_mdash_value(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value(void) { return mgos_config_get_mdash_value(&mgos_sys_config); }

/* mdash.value.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE_ENABLE
int mgos_config_get_mdash_value_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value_enable(void);
static inline int mgos_sys_config_get_mdash_value_enable(void) { return mgos_config_get_mdash_value_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value_enable(void) { return mgos_config_get_default_mdash_value_enable(); }
void mgos_config_set_mdash_value_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value_enable(int v) { mgos_config_set_mdash_value_enable(&mgos_sys_config, v); }

/* mdash.value.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE_TITLE
const char * mgos_config_get_mdash_value_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value_title(void);
static inline const char * mgos_sys_config_get_mdash_value_title(void) { return mgos_config_get_mdash_value_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value_title(void) { return mgos_config_get_default_mdash_value_title(); }
void mgos_config_set_mdash_value_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value_title(const char * v) { mgos_config_set_mdash_value_title(&mgos_sys_config, v); }

/* mdash.value.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE_KEY
const char * mgos_config_get_mdash_value_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value_key(void);
static inline const char * mgos_sys_config_get_mdash_value_key(void) { return mgos_config_get_mdash_value_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value_key(void) { return mgos_config_get_default_mdash_value_key(); }
void mgos_config_set_mdash_value_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value_key(const char * v) { mgos_config_set_mdash_value_key(&mgos_sys_config, v); }

/* mdash.value1 */
#define MGOS_CONFIG_HAVE_MDASH_VALUE1
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE1
const struct mgos_config_mdash_value *mgos_config_get_mdash_value1(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value1(void) { return mgos_config_get_mdash_value1(&mgos_sys_config); }

/* mdash.value1.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE1_ENABLE
int mgos_config_get_mdash_value1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value1_enable(void);
static inline int mgos_sys_config_get_mdash_value1_enable(void) { return mgos_config_get_mdash_value1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value1_enable(void) { return mgos_config_get_default_mdash_value1_enable(); }
void mgos_config_set_mdash_value1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value1_enable(int v) { mgos_config_set_mdash_value1_enable(&mgos_sys_config, v); }

/* mdash.value1.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE1_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE1_TITLE
const char * mgos_config_get_mdash_value1_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value1_title(void);
static inline const char * mgos_sys_config_get_mdash_value1_title(void) { return mgos_config_get_mdash_value1_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value1_title(void) { return mgos_config_get_default_mdash_value1_title(); }
void mgos_config_set_mdash_value1_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value1_title(const char * v) { mgos_config_set_mdash_value1_title(&mgos_sys_config, v); }

/* mdash.value1.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE1_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE1_KEY
const char * mgos_config_get_mdash_value1_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value1_key(void);
static inline const char * mgos_sys_config_get_mdash_value1_key(void) { return mgos_config_get_mdash_value1_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value1_key(void) { return mgos_config_get_default_mdash_value1_key(); }
void mgos_config_set_mdash_value1_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value1_key(const char * v) { mgos_config_set_mdash_value1_key(&mgos_sys_config, v); }

/* mdash.value2 */
#define MGOS_CONFIG_HAVE_MDASH_VALUE2
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE2
const struct mgos_config_mdash_value *mgos_config_get_mdash_value2(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value2(void) { return mgos_config_get_mdash_value2(&mgos_sys_config); }

/* mdash.value2.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE2_ENABLE
int mgos_config_get_mdash_value2_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value2_enable(void);
static inline int mgos_sys_config_get_mdash_value2_enable(void) { return mgos_config_get_mdash_value2_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value2_enable(void) { return mgos_config_get_default_mdash_value2_enable(); }
void mgos_config_set_mdash_value2_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value2_enable(int v) { mgos_config_set_mdash_value2_enable(&mgos_sys_config, v); }

/* mdash.value2.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE2_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE2_TITLE
const char * mgos_config_get_mdash_value2_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value2_title(void);
static inline const char * mgos_sys_config_get_mdash_value2_title(void) { return mgos_config_get_mdash_value2_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value2_title(void) { return mgos_config_get_default_mdash_value2_title(); }
void mgos_config_set_mdash_value2_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value2_title(const char * v) { mgos_config_set_mdash_value2_title(&mgos_sys_config, v); }

/* mdash.value2.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE2_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE2_KEY
const char * mgos_config_get_mdash_value2_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value2_key(void);
static inline const char * mgos_sys_config_get_mdash_value2_key(void) { return mgos_config_get_mdash_value2_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value2_key(void) { return mgos_config_get_default_mdash_value2_key(); }
void mgos_config_set_mdash_value2_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value2_key(const char * v) { mgos_config_set_mdash_value2_key(&mgos_sys_config, v); }

/* mdash.value3 */
#define MGOS_CONFIG_HAVE_MDASH_VALUE3
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE3
const struct mgos_config_mdash_value *mgos_config_get_mdash_value3(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value3(void) { return mgos_config_get_mdash_value3(&mgos_sys_config); }

/* mdash.value3.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE3_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE3_ENABLE
int mgos_config_get_mdash_value3_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value3_enable(void);
static inline int mgos_sys_config_get_mdash_value3_enable(void) { return mgos_config_get_mdash_value3_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value3_enable(void) { return mgos_config_get_default_mdash_value3_enable(); }
void mgos_config_set_mdash_value3_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value3_enable(int v) { mgos_config_set_mdash_value3_enable(&mgos_sys_config, v); }

/* mdash.value3.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE3_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE3_TITLE
const char * mgos_config_get_mdash_value3_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value3_title(void);
static inline const char * mgos_sys_config_get_mdash_value3_title(void) { return mgos_config_get_mdash_value3_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value3_title(void) { return mgos_config_get_default_mdash_value3_title(); }
void mgos_config_set_mdash_value3_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value3_title(const char * v) { mgos_config_set_mdash_value3_title(&mgos_sys_config, v); }

/* mdash.value3.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE3_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE3_KEY
const char * mgos_config_get_mdash_value3_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value3_key(void);
static inline const char * mgos_sys_config_get_mdash_value3_key(void) { return mgos_config_get_mdash_value3_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value3_key(void) { return mgos_config_get_default_mdash_value3_key(); }
void mgos_config_set_mdash_value3_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value3_key(const char * v) { mgos_config_set_mdash_value3_key(&mgos_sys_config, v); }

/* mdash.value4 */
#define MGOS_CONFIG_HAVE_MDASH_VALUE4
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE4
const struct mgos_config_mdash_value *mgos_config_get_mdash_value4(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value4(void) { return mgos_config_get_mdash_value4(&mgos_sys_config); }

/* mdash.value4.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE4_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE4_ENABLE
int mgos_config_get_mdash_value4_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value4_enable(void);
static inline int mgos_sys_config_get_mdash_value4_enable(void) { return mgos_config_get_mdash_value4_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value4_enable(void) { return mgos_config_get_default_mdash_value4_enable(); }
void mgos_config_set_mdash_value4_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value4_enable(int v) { mgos_config_set_mdash_value4_enable(&mgos_sys_config, v); }

/* mdash.value4.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE4_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE4_TITLE
const char * mgos_config_get_mdash_value4_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value4_title(void);
static inline const char * mgos_sys_config_get_mdash_value4_title(void) { return mgos_config_get_mdash_value4_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value4_title(void) { return mgos_config_get_default_mdash_value4_title(); }
void mgos_config_set_mdash_value4_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value4_title(const char * v) { mgos_config_set_mdash_value4_title(&mgos_sys_config, v); }

/* mdash.value4.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE4_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE4_KEY
const char * mgos_config_get_mdash_value4_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value4_key(void);
static inline const char * mgos_sys_config_get_mdash_value4_key(void) { return mgos_config_get_mdash_value4_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value4_key(void) { return mgos_config_get_default_mdash_value4_key(); }
void mgos_config_set_mdash_value4_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value4_key(const char * v) { mgos_config_set_mdash_value4_key(&mgos_sys_config, v); }

/* mdash.value5 */
#define MGOS_CONFIG_HAVE_MDASH_VALUE5
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE5
const struct mgos_config_mdash_value *mgos_config_get_mdash_value5(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value5(void) { return mgos_config_get_mdash_value5(&mgos_sys_config); }

/* mdash.value5.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE5_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE5_ENABLE
int mgos_config_get_mdash_value5_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value5_enable(void);
static inline int mgos_sys_config_get_mdash_value5_enable(void) { return mgos_config_get_mdash_value5_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value5_enable(void) { return mgos_config_get_default_mdash_value5_enable(); }
void mgos_config_set_mdash_value5_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value5_enable(int v) { mgos_config_set_mdash_value5_enable(&mgos_sys_config, v); }

/* mdash.value5.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE5_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE5_TITLE
const char * mgos_config_get_mdash_value5_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value5_title(void);
static inline const char * mgos_sys_config_get_mdash_value5_title(void) { return mgos_config_get_mdash_value5_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value5_title(void) { return mgos_config_get_default_mdash_value5_title(); }
void mgos_config_set_mdash_value5_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value5_title(const char * v) { mgos_config_set_mdash_value5_title(&mgos_sys_config, v); }

/* mdash.value5.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE5_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE5_KEY
const char * mgos_config_get_mdash_value5_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value5_key(void);
static inline const char * mgos_sys_config_get_mdash_value5_key(void) { return mgos_config_get_mdash_value5_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value5_key(void) { return mgos_config_get_default_mdash_value5_key(); }
void mgos_config_set_mdash_value5_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value5_key(const char * v) { mgos_config_set_mdash_value5_key(&mgos_sys_config, v); }

/* mdash.value6 */
#define MGOS_CONFIG_HAVE_MDASH_VALUE6
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE6
const struct mgos_config_mdash_value *mgos_config_get_mdash_value6(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value6(void) { return mgos_config_get_mdash_value6(&mgos_sys_config); }

/* mdash.value6.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE6_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE6_ENABLE
int mgos_config_get_mdash_value6_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value6_enable(void);
static inline int mgos_sys_config_get_mdash_value6_enable(void) { return mgos_config_get_mdash_value6_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value6_enable(void) { return mgos_config_get_default_mdash_value6_enable(); }
void mgos_config_set_mdash_value6_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value6_enable(int v) { mgos_config_set_mdash_value6_enable(&mgos_sys_config, v); }

/* mdash.value6.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE6_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE6_TITLE
const char * mgos_config_get_mdash_value6_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value6_title(void);
static inline const char * mgos_sys_config_get_mdash_value6_title(void) { return mgos_config_get_mdash_value6_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value6_title(void) { return mgos_config_get_default_mdash_value6_title(); }
void mgos_config_set_mdash_value6_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value6_title(const char * v) { mgos_config_set_mdash_value6_title(&mgos_sys_config, v); }

/* mdash.value6.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE6_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE6_KEY
const char * mgos_config_get_mdash_value6_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value6_key(void);
static inline const char * mgos_sys_config_get_mdash_value6_key(void) { return mgos_config_get_mdash_value6_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value6_key(void) { return mgos_config_get_default_mdash_value6_key(); }
void mgos_config_set_mdash_value6_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value6_key(const char * v) { mgos_config_set_mdash_value6_key(&mgos_sys_config, v); }

/* mdash.value7 */
#define MGOS_CONFIG_HAVE_MDASH_VALUE7
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE7
const struct mgos_config_mdash_value *mgos_config_get_mdash_value7(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value7(void) { return mgos_config_get_mdash_value7(&mgos_sys_config); }

/* mdash.value7.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE7_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE7_ENABLE
int mgos_config_get_mdash_value7_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value7_enable(void);
static inline int mgos_sys_config_get_mdash_value7_enable(void) { return mgos_config_get_mdash_value7_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value7_enable(void) { return mgos_config_get_default_mdash_value7_enable(); }
void mgos_config_set_mdash_value7_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value7_enable(int v) { mgos_config_set_mdash_value7_enable(&mgos_sys_config, v); }

/* mdash.value7.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE7_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE7_TITLE
const char * mgos_config_get_mdash_value7_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value7_title(void);
static inline const char * mgos_sys_config_get_mdash_value7_title(void) { return mgos_config_get_mdash_value7_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value7_title(void) { return mgos_config_get_default_mdash_value7_title(); }
void mgos_config_set_mdash_value7_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value7_title(const char * v) { mgos_config_set_mdash_value7_title(&mgos_sys_config, v); }

/* mdash.value7.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE7_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE7_KEY
const char * mgos_config_get_mdash_value7_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value7_key(void);
static inline const char * mgos_sys_config_get_mdash_value7_key(void) { return mgos_config_get_mdash_value7_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value7_key(void) { return mgos_config_get_default_mdash_value7_key(); }
void mgos_config_set_mdash_value7_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value7_key(const char * v) { mgos_config_set_mdash_value7_key(&mgos_sys_config, v); }

/* mdash.value8 */
#define MGOS_CONFIG_HAVE_MDASH_VALUE8
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE8
const struct mgos_config_mdash_value *mgos_config_get_mdash_value8(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value8(void) { return mgos_config_get_mdash_value8(&mgos_sys_config); }

/* mdash.value8.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE8_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE8_ENABLE
int mgos_config_get_mdash_value8_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value8_enable(void);
static inline int mgos_sys_config_get_mdash_value8_enable(void) { return mgos_config_get_mdash_value8_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value8_enable(void) { return mgos_config_get_default_mdash_value8_enable(); }
void mgos_config_set_mdash_value8_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value8_enable(int v) { mgos_config_set_mdash_value8_enable(&mgos_sys_config, v); }

/* mdash.value8.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE8_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE8_TITLE
const char * mgos_config_get_mdash_value8_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value8_title(void);
static inline const char * mgos_sys_config_get_mdash_value8_title(void) { return mgos_config_get_mdash_value8_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value8_title(void) { return mgos_config_get_default_mdash_value8_title(); }
void mgos_config_set_mdash_value8_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value8_title(const char * v) { mgos_config_set_mdash_value8_title(&mgos_sys_config, v); }

/* mdash.value8.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE8_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE8_KEY
const char * mgos_config_get_mdash_value8_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value8_key(void);
static inline const char * mgos_sys_config_get_mdash_value8_key(void) { return mgos_config_get_mdash_value8_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value8_key(void) { return mgos_config_get_default_mdash_value8_key(); }
void mgos_config_set_mdash_value8_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value8_key(const char * v) { mgos_config_set_mdash_value8_key(&mgos_sys_config, v); }

/* mdash.value9 */
#define MGOS_CONFIG_HAVE_MDASH_VALUE9
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE9
const struct mgos_config_mdash_value *mgos_config_get_mdash_value9(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_value *mgos_sys_config_get_mdash_value9(void) { return mgos_config_get_mdash_value9(&mgos_sys_config); }

/* mdash.value9.enable */
#define MGOS_CONFIG_HAVE_MDASH_VALUE9_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE9_ENABLE
int mgos_config_get_mdash_value9_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_value9_enable(void);
static inline int mgos_sys_config_get_mdash_value9_enable(void) { return mgos_config_get_mdash_value9_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_value9_enable(void) { return mgos_config_get_default_mdash_value9_enable(); }
void mgos_config_set_mdash_value9_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_value9_enable(int v) { mgos_config_set_mdash_value9_enable(&mgos_sys_config, v); }

/* mdash.value9.title */
#define MGOS_CONFIG_HAVE_MDASH_VALUE9_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE9_TITLE
const char * mgos_config_get_mdash_value9_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value9_title(void);
static inline const char * mgos_sys_config_get_mdash_value9_title(void) { return mgos_config_get_mdash_value9_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value9_title(void) { return mgos_config_get_default_mdash_value9_title(); }
void mgos_config_set_mdash_value9_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value9_title(const char * v) { mgos_config_set_mdash_value9_title(&mgos_sys_config, v); }

/* mdash.value9.key */
#define MGOS_CONFIG_HAVE_MDASH_VALUE9_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_VALUE9_KEY
const char * mgos_config_get_mdash_value9_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_value9_key(void);
static inline const char * mgos_sys_config_get_mdash_value9_key(void) { return mgos_config_get_mdash_value9_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_value9_key(void) { return mgos_config_get_default_mdash_value9_key(); }
void mgos_config_set_mdash_value9_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_value9_key(const char * v) { mgos_config_set_mdash_value9_key(&mgos_sys_config, v); }

/* mdash.input */
#define MGOS_CONFIG_HAVE_MDASH_INPUT
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT
const struct mgos_config_mdash_input *mgos_config_get_mdash_input(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input(void) { return mgos_config_get_mdash_input(&mgos_sys_config); }

/* mdash.input.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT_ENABLE
int mgos_config_get_mdash_input_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input_enable(void);
static inline int mgos_sys_config_get_mdash_input_enable(void) { return mgos_config_get_mdash_input_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input_enable(void) { return mgos_config_get_default_mdash_input_enable(); }
void mgos_config_set_mdash_input_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input_enable(int v) { mgos_config_set_mdash_input_enable(&mgos_sys_config, v); }

/* mdash.input.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT_TITLE
const char * mgos_config_get_mdash_input_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input_title(void);
static inline const char * mgos_sys_config_get_mdash_input_title(void) { return mgos_config_get_mdash_input_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input_title(void) { return mgos_config_get_default_mdash_input_title(); }
void mgos_config_set_mdash_input_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input_title(const char * v) { mgos_config_set_mdash_input_title(&mgos_sys_config, v); }

/* mdash.input.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT_KEY
const char * mgos_config_get_mdash_input_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input_key(void);
static inline const char * mgos_sys_config_get_mdash_input_key(void) { return mgos_config_get_mdash_input_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input_key(void) { return mgos_config_get_default_mdash_input_key(); }
void mgos_config_set_mdash_input_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input_key(const char * v) { mgos_config_set_mdash_input_key(&mgos_sys_config, v); }

/* mdash.input1 */
#define MGOS_CONFIG_HAVE_MDASH_INPUT1
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT1
const struct mgos_config_mdash_input *mgos_config_get_mdash_input1(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input1(void) { return mgos_config_get_mdash_input1(&mgos_sys_config); }

/* mdash.input1.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT1_ENABLE
int mgos_config_get_mdash_input1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input1_enable(void);
static inline int mgos_sys_config_get_mdash_input1_enable(void) { return mgos_config_get_mdash_input1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input1_enable(void) { return mgos_config_get_default_mdash_input1_enable(); }
void mgos_config_set_mdash_input1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input1_enable(int v) { mgos_config_set_mdash_input1_enable(&mgos_sys_config, v); }

/* mdash.input1.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT1_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT1_TITLE
const char * mgos_config_get_mdash_input1_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input1_title(void);
static inline const char * mgos_sys_config_get_mdash_input1_title(void) { return mgos_config_get_mdash_input1_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input1_title(void) { return mgos_config_get_default_mdash_input1_title(); }
void mgos_config_set_mdash_input1_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input1_title(const char * v) { mgos_config_set_mdash_input1_title(&mgos_sys_config, v); }

/* mdash.input1.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT1_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT1_KEY
const char * mgos_config_get_mdash_input1_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input1_key(void);
static inline const char * mgos_sys_config_get_mdash_input1_key(void) { return mgos_config_get_mdash_input1_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input1_key(void) { return mgos_config_get_default_mdash_input1_key(); }
void mgos_config_set_mdash_input1_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input1_key(const char * v) { mgos_config_set_mdash_input1_key(&mgos_sys_config, v); }

/* mdash.input2 */
#define MGOS_CONFIG_HAVE_MDASH_INPUT2
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT2
const struct mgos_config_mdash_input *mgos_config_get_mdash_input2(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input2(void) { return mgos_config_get_mdash_input2(&mgos_sys_config); }

/* mdash.input2.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT2_ENABLE
int mgos_config_get_mdash_input2_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input2_enable(void);
static inline int mgos_sys_config_get_mdash_input2_enable(void) { return mgos_config_get_mdash_input2_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input2_enable(void) { return mgos_config_get_default_mdash_input2_enable(); }
void mgos_config_set_mdash_input2_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input2_enable(int v) { mgos_config_set_mdash_input2_enable(&mgos_sys_config, v); }

/* mdash.input2.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT2_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT2_TITLE
const char * mgos_config_get_mdash_input2_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input2_title(void);
static inline const char * mgos_sys_config_get_mdash_input2_title(void) { return mgos_config_get_mdash_input2_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input2_title(void) { return mgos_config_get_default_mdash_input2_title(); }
void mgos_config_set_mdash_input2_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input2_title(const char * v) { mgos_config_set_mdash_input2_title(&mgos_sys_config, v); }

/* mdash.input2.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT2_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT2_KEY
const char * mgos_config_get_mdash_input2_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input2_key(void);
static inline const char * mgos_sys_config_get_mdash_input2_key(void) { return mgos_config_get_mdash_input2_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input2_key(void) { return mgos_config_get_default_mdash_input2_key(); }
void mgos_config_set_mdash_input2_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input2_key(const char * v) { mgos_config_set_mdash_input2_key(&mgos_sys_config, v); }

/* mdash.input3 */
#define MGOS_CONFIG_HAVE_MDASH_INPUT3
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT3
const struct mgos_config_mdash_input *mgos_config_get_mdash_input3(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input3(void) { return mgos_config_get_mdash_input3(&mgos_sys_config); }

/* mdash.input3.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT3_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT3_ENABLE
int mgos_config_get_mdash_input3_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input3_enable(void);
static inline int mgos_sys_config_get_mdash_input3_enable(void) { return mgos_config_get_mdash_input3_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input3_enable(void) { return mgos_config_get_default_mdash_input3_enable(); }
void mgos_config_set_mdash_input3_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input3_enable(int v) { mgos_config_set_mdash_input3_enable(&mgos_sys_config, v); }

/* mdash.input3.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT3_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT3_TITLE
const char * mgos_config_get_mdash_input3_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input3_title(void);
static inline const char * mgos_sys_config_get_mdash_input3_title(void) { return mgos_config_get_mdash_input3_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input3_title(void) { return mgos_config_get_default_mdash_input3_title(); }
void mgos_config_set_mdash_input3_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input3_title(const char * v) { mgos_config_set_mdash_input3_title(&mgos_sys_config, v); }

/* mdash.input3.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT3_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT3_KEY
const char * mgos_config_get_mdash_input3_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input3_key(void);
static inline const char * mgos_sys_config_get_mdash_input3_key(void) { return mgos_config_get_mdash_input3_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input3_key(void) { return mgos_config_get_default_mdash_input3_key(); }
void mgos_config_set_mdash_input3_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input3_key(const char * v) { mgos_config_set_mdash_input3_key(&mgos_sys_config, v); }

/* mdash.input4 */
#define MGOS_CONFIG_HAVE_MDASH_INPUT4
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT4
const struct mgos_config_mdash_input *mgos_config_get_mdash_input4(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input4(void) { return mgos_config_get_mdash_input4(&mgos_sys_config); }

/* mdash.input4.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT4_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT4_ENABLE
int mgos_config_get_mdash_input4_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input4_enable(void);
static inline int mgos_sys_config_get_mdash_input4_enable(void) { return mgos_config_get_mdash_input4_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input4_enable(void) { return mgos_config_get_default_mdash_input4_enable(); }
void mgos_config_set_mdash_input4_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input4_enable(int v) { mgos_config_set_mdash_input4_enable(&mgos_sys_config, v); }

/* mdash.input4.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT4_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT4_TITLE
const char * mgos_config_get_mdash_input4_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input4_title(void);
static inline const char * mgos_sys_config_get_mdash_input4_title(void) { return mgos_config_get_mdash_input4_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input4_title(void) { return mgos_config_get_default_mdash_input4_title(); }
void mgos_config_set_mdash_input4_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input4_title(const char * v) { mgos_config_set_mdash_input4_title(&mgos_sys_config, v); }

/* mdash.input4.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT4_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT4_KEY
const char * mgos_config_get_mdash_input4_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input4_key(void);
static inline const char * mgos_sys_config_get_mdash_input4_key(void) { return mgos_config_get_mdash_input4_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input4_key(void) { return mgos_config_get_default_mdash_input4_key(); }
void mgos_config_set_mdash_input4_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input4_key(const char * v) { mgos_config_set_mdash_input4_key(&mgos_sys_config, v); }

/* mdash.input5 */
#define MGOS_CONFIG_HAVE_MDASH_INPUT5
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT5
const struct mgos_config_mdash_input *mgos_config_get_mdash_input5(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input5(void) { return mgos_config_get_mdash_input5(&mgos_sys_config); }

/* mdash.input5.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT5_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT5_ENABLE
int mgos_config_get_mdash_input5_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input5_enable(void);
static inline int mgos_sys_config_get_mdash_input5_enable(void) { return mgos_config_get_mdash_input5_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input5_enable(void) { return mgos_config_get_default_mdash_input5_enable(); }
void mgos_config_set_mdash_input5_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input5_enable(int v) { mgos_config_set_mdash_input5_enable(&mgos_sys_config, v); }

/* mdash.input5.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT5_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT5_TITLE
const char * mgos_config_get_mdash_input5_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input5_title(void);
static inline const char * mgos_sys_config_get_mdash_input5_title(void) { return mgos_config_get_mdash_input5_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input5_title(void) { return mgos_config_get_default_mdash_input5_title(); }
void mgos_config_set_mdash_input5_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input5_title(const char * v) { mgos_config_set_mdash_input5_title(&mgos_sys_config, v); }

/* mdash.input5.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT5_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT5_KEY
const char * mgos_config_get_mdash_input5_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input5_key(void);
static inline const char * mgos_sys_config_get_mdash_input5_key(void) { return mgos_config_get_mdash_input5_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input5_key(void) { return mgos_config_get_default_mdash_input5_key(); }
void mgos_config_set_mdash_input5_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input5_key(const char * v) { mgos_config_set_mdash_input5_key(&mgos_sys_config, v); }

/* mdash.input6 */
#define MGOS_CONFIG_HAVE_MDASH_INPUT6
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT6
const struct mgos_config_mdash_input *mgos_config_get_mdash_input6(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input6(void) { return mgos_config_get_mdash_input6(&mgos_sys_config); }

/* mdash.input6.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT6_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT6_ENABLE
int mgos_config_get_mdash_input6_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input6_enable(void);
static inline int mgos_sys_config_get_mdash_input6_enable(void) { return mgos_config_get_mdash_input6_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input6_enable(void) { return mgos_config_get_default_mdash_input6_enable(); }
void mgos_config_set_mdash_input6_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input6_enable(int v) { mgos_config_set_mdash_input6_enable(&mgos_sys_config, v); }

/* mdash.input6.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT6_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT6_TITLE
const char * mgos_config_get_mdash_input6_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input6_title(void);
static inline const char * mgos_sys_config_get_mdash_input6_title(void) { return mgos_config_get_mdash_input6_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input6_title(void) { return mgos_config_get_default_mdash_input6_title(); }
void mgos_config_set_mdash_input6_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input6_title(const char * v) { mgos_config_set_mdash_input6_title(&mgos_sys_config, v); }

/* mdash.input6.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT6_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT6_KEY
const char * mgos_config_get_mdash_input6_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input6_key(void);
static inline const char * mgos_sys_config_get_mdash_input6_key(void) { return mgos_config_get_mdash_input6_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input6_key(void) { return mgos_config_get_default_mdash_input6_key(); }
void mgos_config_set_mdash_input6_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input6_key(const char * v) { mgos_config_set_mdash_input6_key(&mgos_sys_config, v); }

/* mdash.input7 */
#define MGOS_CONFIG_HAVE_MDASH_INPUT7
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT7
const struct mgos_config_mdash_input *mgos_config_get_mdash_input7(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input7(void) { return mgos_config_get_mdash_input7(&mgos_sys_config); }

/* mdash.input7.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT7_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT7_ENABLE
int mgos_config_get_mdash_input7_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input7_enable(void);
static inline int mgos_sys_config_get_mdash_input7_enable(void) { return mgos_config_get_mdash_input7_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input7_enable(void) { return mgos_config_get_default_mdash_input7_enable(); }
void mgos_config_set_mdash_input7_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input7_enable(int v) { mgos_config_set_mdash_input7_enable(&mgos_sys_config, v); }

/* mdash.input7.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT7_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT7_TITLE
const char * mgos_config_get_mdash_input7_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input7_title(void);
static inline const char * mgos_sys_config_get_mdash_input7_title(void) { return mgos_config_get_mdash_input7_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input7_title(void) { return mgos_config_get_default_mdash_input7_title(); }
void mgos_config_set_mdash_input7_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input7_title(const char * v) { mgos_config_set_mdash_input7_title(&mgos_sys_config, v); }

/* mdash.input7.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT7_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT7_KEY
const char * mgos_config_get_mdash_input7_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input7_key(void);
static inline const char * mgos_sys_config_get_mdash_input7_key(void) { return mgos_config_get_mdash_input7_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input7_key(void) { return mgos_config_get_default_mdash_input7_key(); }
void mgos_config_set_mdash_input7_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input7_key(const char * v) { mgos_config_set_mdash_input7_key(&mgos_sys_config, v); }

/* mdash.input8 */
#define MGOS_CONFIG_HAVE_MDASH_INPUT8
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT8
const struct mgos_config_mdash_input *mgos_config_get_mdash_input8(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input8(void) { return mgos_config_get_mdash_input8(&mgos_sys_config); }

/* mdash.input8.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT8_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT8_ENABLE
int mgos_config_get_mdash_input8_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input8_enable(void);
static inline int mgos_sys_config_get_mdash_input8_enable(void) { return mgos_config_get_mdash_input8_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input8_enable(void) { return mgos_config_get_default_mdash_input8_enable(); }
void mgos_config_set_mdash_input8_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input8_enable(int v) { mgos_config_set_mdash_input8_enable(&mgos_sys_config, v); }

/* mdash.input8.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT8_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT8_TITLE
const char * mgos_config_get_mdash_input8_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input8_title(void);
static inline const char * mgos_sys_config_get_mdash_input8_title(void) { return mgos_config_get_mdash_input8_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input8_title(void) { return mgos_config_get_default_mdash_input8_title(); }
void mgos_config_set_mdash_input8_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input8_title(const char * v) { mgos_config_set_mdash_input8_title(&mgos_sys_config, v); }

/* mdash.input8.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT8_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT8_KEY
const char * mgos_config_get_mdash_input8_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input8_key(void);
static inline const char * mgos_sys_config_get_mdash_input8_key(void) { return mgos_config_get_mdash_input8_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input8_key(void) { return mgos_config_get_default_mdash_input8_key(); }
void mgos_config_set_mdash_input8_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input8_key(const char * v) { mgos_config_set_mdash_input8_key(&mgos_sys_config, v); }

/* mdash.input9 */
#define MGOS_CONFIG_HAVE_MDASH_INPUT9
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT9
const struct mgos_config_mdash_input *mgos_config_get_mdash_input9(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_input *mgos_sys_config_get_mdash_input9(void) { return mgos_config_get_mdash_input9(&mgos_sys_config); }

/* mdash.input9.enable */
#define MGOS_CONFIG_HAVE_MDASH_INPUT9_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT9_ENABLE
int mgos_config_get_mdash_input9_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_input9_enable(void);
static inline int mgos_sys_config_get_mdash_input9_enable(void) { return mgos_config_get_mdash_input9_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_input9_enable(void) { return mgos_config_get_default_mdash_input9_enable(); }
void mgos_config_set_mdash_input9_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_input9_enable(int v) { mgos_config_set_mdash_input9_enable(&mgos_sys_config, v); }

/* mdash.input9.title */
#define MGOS_CONFIG_HAVE_MDASH_INPUT9_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT9_TITLE
const char * mgos_config_get_mdash_input9_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input9_title(void);
static inline const char * mgos_sys_config_get_mdash_input9_title(void) { return mgos_config_get_mdash_input9_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input9_title(void) { return mgos_config_get_default_mdash_input9_title(); }
void mgos_config_set_mdash_input9_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input9_title(const char * v) { mgos_config_set_mdash_input9_title(&mgos_sys_config, v); }

/* mdash.input9.key */
#define MGOS_CONFIG_HAVE_MDASH_INPUT9_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_INPUT9_KEY
const char * mgos_config_get_mdash_input9_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_input9_key(void);
static inline const char * mgos_sys_config_get_mdash_input9_key(void) { return mgos_config_get_mdash_input9_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_input9_key(void) { return mgos_config_get_default_mdash_input9_key(); }
void mgos_config_set_mdash_input9_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_input9_key(const char * v) { mgos_config_set_mdash_input9_key(&mgos_sys_config, v); }

/* mdash.toggle */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE
const struct mgos_config_mdash_toggle *mgos_config_get_mdash_toggle(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_toggle *mgos_sys_config_get_mdash_toggle(void) { return mgos_config_get_mdash_toggle(&mgos_sys_config); }

/* mdash.toggle.enable */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE_ENABLE
int mgos_config_get_mdash_toggle_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_toggle_enable(void);
static inline int mgos_sys_config_get_mdash_toggle_enable(void) { return mgos_config_get_mdash_toggle_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_toggle_enable(void) { return mgos_config_get_default_mdash_toggle_enable(); }
void mgos_config_set_mdash_toggle_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_toggle_enable(int v) { mgos_config_set_mdash_toggle_enable(&mgos_sys_config, v); }

/* mdash.toggle.title */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE_TITLE
const char * mgos_config_get_mdash_toggle_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_toggle_title(void);
static inline const char * mgos_sys_config_get_mdash_toggle_title(void) { return mgos_config_get_mdash_toggle_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_toggle_title(void) { return mgos_config_get_default_mdash_toggle_title(); }
void mgos_config_set_mdash_toggle_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_toggle_title(const char * v) { mgos_config_set_mdash_toggle_title(&mgos_sys_config, v); }

/* mdash.toggle.key */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE_KEY
const char * mgos_config_get_mdash_toggle_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_toggle_key(void);
static inline const char * mgos_sys_config_get_mdash_toggle_key(void) { return mgos_config_get_mdash_toggle_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_toggle_key(void) { return mgos_config_get_default_mdash_toggle_key(); }
void mgos_config_set_mdash_toggle_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_toggle_key(const char * v) { mgos_config_set_mdash_toggle_key(&mgos_sys_config, v); }

/* mdash.toggle1 */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE1
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE1
const struct mgos_config_mdash_toggle *mgos_config_get_mdash_toggle1(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_toggle *mgos_sys_config_get_mdash_toggle1(void) { return mgos_config_get_mdash_toggle1(&mgos_sys_config); }

/* mdash.toggle1.enable */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE1_ENABLE
int mgos_config_get_mdash_toggle1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_toggle1_enable(void);
static inline int mgos_sys_config_get_mdash_toggle1_enable(void) { return mgos_config_get_mdash_toggle1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_toggle1_enable(void) { return mgos_config_get_default_mdash_toggle1_enable(); }
void mgos_config_set_mdash_toggle1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_toggle1_enable(int v) { mgos_config_set_mdash_toggle1_enable(&mgos_sys_config, v); }

/* mdash.toggle1.title */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE1_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE1_TITLE
const char * mgos_config_get_mdash_toggle1_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_toggle1_title(void);
static inline const char * mgos_sys_config_get_mdash_toggle1_title(void) { return mgos_config_get_mdash_toggle1_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_toggle1_title(void) { return mgos_config_get_default_mdash_toggle1_title(); }
void mgos_config_set_mdash_toggle1_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_toggle1_title(const char * v) { mgos_config_set_mdash_toggle1_title(&mgos_sys_config, v); }

/* mdash.toggle1.key */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE1_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE1_KEY
const char * mgos_config_get_mdash_toggle1_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_toggle1_key(void);
static inline const char * mgos_sys_config_get_mdash_toggle1_key(void) { return mgos_config_get_mdash_toggle1_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_toggle1_key(void) { return mgos_config_get_default_mdash_toggle1_key(); }
void mgos_config_set_mdash_toggle1_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_toggle1_key(const char * v) { mgos_config_set_mdash_toggle1_key(&mgos_sys_config, v); }

/* mdash.toggle2 */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE2
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE2
const struct mgos_config_mdash_toggle *mgos_config_get_mdash_toggle2(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_toggle *mgos_sys_config_get_mdash_toggle2(void) { return mgos_config_get_mdash_toggle2(&mgos_sys_config); }

/* mdash.toggle2.enable */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE2_ENABLE
int mgos_config_get_mdash_toggle2_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_toggle2_enable(void);
static inline int mgos_sys_config_get_mdash_toggle2_enable(void) { return mgos_config_get_mdash_toggle2_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_toggle2_enable(void) { return mgos_config_get_default_mdash_toggle2_enable(); }
void mgos_config_set_mdash_toggle2_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_toggle2_enable(int v) { mgos_config_set_mdash_toggle2_enable(&mgos_sys_config, v); }

/* mdash.toggle2.title */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE2_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE2_TITLE
const char * mgos_config_get_mdash_toggle2_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_toggle2_title(void);
static inline const char * mgos_sys_config_get_mdash_toggle2_title(void) { return mgos_config_get_mdash_toggle2_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_toggle2_title(void) { return mgos_config_get_default_mdash_toggle2_title(); }
void mgos_config_set_mdash_toggle2_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_toggle2_title(const char * v) { mgos_config_set_mdash_toggle2_title(&mgos_sys_config, v); }

/* mdash.toggle2.key */
#define MGOS_CONFIG_HAVE_MDASH_TOGGLE2_KEY
#define MGOS_SYS_CONFIG_HAVE_MDASH_TOGGLE2_KEY
const char * mgos_config_get_mdash_toggle2_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_toggle2_key(void);
static inline const char * mgos_sys_config_get_mdash_toggle2_key(void) { return mgos_config_get_mdash_toggle2_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_toggle2_key(void) { return mgos_config_get_default_mdash_toggle2_key(); }
void mgos_config_set_mdash_toggle2_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_toggle2_key(const char * v) { mgos_config_set_mdash_toggle2_key(&mgos_sys_config, v); }

/* mdash.button */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON
const struct mgos_config_mdash_button *mgos_config_get_mdash_button(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_button *mgos_sys_config_get_mdash_button(void) { return mgos_config_get_mdash_button(&mgos_sys_config); }

/* mdash.button.enable */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON_ENABLE
int mgos_config_get_mdash_button_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_button_enable(void);
static inline int mgos_sys_config_get_mdash_button_enable(void) { return mgos_config_get_mdash_button_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_button_enable(void) { return mgos_config_get_default_mdash_button_enable(); }
void mgos_config_set_mdash_button_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_button_enable(int v) { mgos_config_set_mdash_button_enable(&mgos_sys_config, v); }

/* mdash.button.title */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON_TITLE
const char * mgos_config_get_mdash_button_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button_title(void);
static inline const char * mgos_sys_config_get_mdash_button_title(void) { return mgos_config_get_mdash_button_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button_title(void) { return mgos_config_get_default_mdash_button_title(); }
void mgos_config_set_mdash_button_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button_title(const char * v) { mgos_config_set_mdash_button_title(&mgos_sys_config, v); }

/* mdash.button.method */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON_METHOD
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON_METHOD
const char * mgos_config_get_mdash_button_method(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button_method(void);
static inline const char * mgos_sys_config_get_mdash_button_method(void) { return mgos_config_get_mdash_button_method(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button_method(void) { return mgos_config_get_default_mdash_button_method(); }
void mgos_config_set_mdash_button_method(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button_method(const char * v) { mgos_config_set_mdash_button_method(&mgos_sys_config, v); }

/* mdash.button.params */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON_PARAMS
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON_PARAMS
const char * mgos_config_get_mdash_button_params(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button_params(void);
static inline const char * mgos_sys_config_get_mdash_button_params(void) { return mgos_config_get_mdash_button_params(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button_params(void) { return mgos_config_get_default_mdash_button_params(); }
void mgos_config_set_mdash_button_params(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button_params(const char * v) { mgos_config_set_mdash_button_params(&mgos_sys_config, v); }

/* mdash.button.icon */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON_ICON
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON_ICON
const char * mgos_config_get_mdash_button_icon(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button_icon(void);
static inline const char * mgos_sys_config_get_mdash_button_icon(void) { return mgos_config_get_mdash_button_icon(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button_icon(void) { return mgos_config_get_default_mdash_button_icon(); }
void mgos_config_set_mdash_button_icon(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button_icon(const char * v) { mgos_config_set_mdash_button_icon(&mgos_sys_config, v); }

/* mdash.button1 */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON1
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON1
const struct mgos_config_mdash_button *mgos_config_get_mdash_button1(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_button *mgos_sys_config_get_mdash_button1(void) { return mgos_config_get_mdash_button1(&mgos_sys_config); }

/* mdash.button1.enable */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON1_ENABLE
int mgos_config_get_mdash_button1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_button1_enable(void);
static inline int mgos_sys_config_get_mdash_button1_enable(void) { return mgos_config_get_mdash_button1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_button1_enable(void) { return mgos_config_get_default_mdash_button1_enable(); }
void mgos_config_set_mdash_button1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_button1_enable(int v) { mgos_config_set_mdash_button1_enable(&mgos_sys_config, v); }

/* mdash.button1.title */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON1_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON1_TITLE
const char * mgos_config_get_mdash_button1_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button1_title(void);
static inline const char * mgos_sys_config_get_mdash_button1_title(void) { return mgos_config_get_mdash_button1_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button1_title(void) { return mgos_config_get_default_mdash_button1_title(); }
void mgos_config_set_mdash_button1_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button1_title(const char * v) { mgos_config_set_mdash_button1_title(&mgos_sys_config, v); }

/* mdash.button1.method */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON1_METHOD
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON1_METHOD
const char * mgos_config_get_mdash_button1_method(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button1_method(void);
static inline const char * mgos_sys_config_get_mdash_button1_method(void) { return mgos_config_get_mdash_button1_method(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button1_method(void) { return mgos_config_get_default_mdash_button1_method(); }
void mgos_config_set_mdash_button1_method(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button1_method(const char * v) { mgos_config_set_mdash_button1_method(&mgos_sys_config, v); }

/* mdash.button1.params */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON1_PARAMS
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON1_PARAMS
const char * mgos_config_get_mdash_button1_params(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button1_params(void);
static inline const char * mgos_sys_config_get_mdash_button1_params(void) { return mgos_config_get_mdash_button1_params(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button1_params(void) { return mgos_config_get_default_mdash_button1_params(); }
void mgos_config_set_mdash_button1_params(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button1_params(const char * v) { mgos_config_set_mdash_button1_params(&mgos_sys_config, v); }

/* mdash.button1.icon */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON1_ICON
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON1_ICON
const char * mgos_config_get_mdash_button1_icon(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button1_icon(void);
static inline const char * mgos_sys_config_get_mdash_button1_icon(void) { return mgos_config_get_mdash_button1_icon(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button1_icon(void) { return mgos_config_get_default_mdash_button1_icon(); }
void mgos_config_set_mdash_button1_icon(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button1_icon(const char * v) { mgos_config_set_mdash_button1_icon(&mgos_sys_config, v); }

/* mdash.button2 */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON2
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON2
const struct mgos_config_mdash_button *mgos_config_get_mdash_button2(const struct mgos_config *cfg);
static inline const struct mgos_config_mdash_button *mgos_sys_config_get_mdash_button2(void) { return mgos_config_get_mdash_button2(&mgos_sys_config); }

/* mdash.button2.enable */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON2_ENABLE
int mgos_config_get_mdash_button2_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mdash_button2_enable(void);
static inline int mgos_sys_config_get_mdash_button2_enable(void) { return mgos_config_get_mdash_button2_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mdash_button2_enable(void) { return mgos_config_get_default_mdash_button2_enable(); }
void mgos_config_set_mdash_button2_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mdash_button2_enable(int v) { mgos_config_set_mdash_button2_enable(&mgos_sys_config, v); }

/* mdash.button2.title */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON2_TITLE
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON2_TITLE
const char * mgos_config_get_mdash_button2_title(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button2_title(void);
static inline const char * mgos_sys_config_get_mdash_button2_title(void) { return mgos_config_get_mdash_button2_title(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button2_title(void) { return mgos_config_get_default_mdash_button2_title(); }
void mgos_config_set_mdash_button2_title(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button2_title(const char * v) { mgos_config_set_mdash_button2_title(&mgos_sys_config, v); }

/* mdash.button2.method */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON2_METHOD
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON2_METHOD
const char * mgos_config_get_mdash_button2_method(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button2_method(void);
static inline const char * mgos_sys_config_get_mdash_button2_method(void) { return mgos_config_get_mdash_button2_method(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button2_method(void) { return mgos_config_get_default_mdash_button2_method(); }
void mgos_config_set_mdash_button2_method(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button2_method(const char * v) { mgos_config_set_mdash_button2_method(&mgos_sys_config, v); }

/* mdash.button2.params */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON2_PARAMS
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON2_PARAMS
const char * mgos_config_get_mdash_button2_params(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button2_params(void);
static inline const char * mgos_sys_config_get_mdash_button2_params(void) { return mgos_config_get_mdash_button2_params(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button2_params(void) { return mgos_config_get_default_mdash_button2_params(); }
void mgos_config_set_mdash_button2_params(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button2_params(const char * v) { mgos_config_set_mdash_button2_params(&mgos_sys_config, v); }

/* mdash.button2.icon */
#define MGOS_CONFIG_HAVE_MDASH_BUTTON2_ICON
#define MGOS_SYS_CONFIG_HAVE_MDASH_BUTTON2_ICON
const char * mgos_config_get_mdash_button2_icon(const struct mgos_config *cfg);
const char * mgos_config_get_default_mdash_button2_icon(void);
static inline const char * mgos_sys_config_get_mdash_button2_icon(void) { return mgos_config_get_mdash_button2_icon(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mdash_button2_icon(void) { return mgos_config_get_default_mdash_button2_icon(); }
void mgos_config_set_mdash_button2_icon(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mdash_button2_icon(const char * v) { mgos_config_set_mdash_button2_icon(&mgos_sys_config, v); }

/* rpc */
#define MGOS_CONFIG_HAVE_RPC
#define MGOS_SYS_CONFIG_HAVE_RPC
const struct mgos_config_rpc *mgos_config_get_rpc(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc *mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }

/* rpc.enable */
#define MGOS_CONFIG_HAVE_RPC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_ENABLE
int mgos_config_get_rpc_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_enable(void);
static inline int mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_enable(void) { return mgos_config_get_default_rpc_enable(); }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_enable(int v) { mgos_config_set_rpc_enable(&mgos_sys_config, v); }

/* rpc.http_enable */
#define MGOS_CONFIG_HAVE_RPC_HTTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_HTTP_ENABLE
int mgos_config_get_rpc_http_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_http_enable(void);
static inline int mgos_sys_config_get_rpc_http_enable(void) { return mgos_config_get_rpc_http_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_http_enable(void) { return mgos_config_get_default_rpc_http_enable(); }
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_http_enable(int v) { mgos_config_set_rpc_http_enable(&mgos_sys_config, v); }

/* rpc.service_sys_enable */
#define MGOS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
int mgos_config_get_rpc_service_sys_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_service_sys_enable(void);
static inline int mgos_sys_config_get_rpc_service_sys_enable(void) { return mgos_config_get_rpc_service_sys_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_service_sys_enable(void) { return mgos_config_get_default_rpc_service_sys_enable(); }
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_service_sys_enable(int v) { mgos_config_set_rpc_service_sys_enable(&mgos_sys_config, v); }

/* rpc.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
int mgos_config_get_rpc_max_frame_size(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_max_frame_size(void);
static inline int mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_max_frame_size(void) { return mgos_config_get_default_rpc_max_frame_size(); }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_frame_size(int v) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, v); }

/* rpc.max_queue_length */
#define MGOS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
int mgos_config_get_rpc_max_queue_length(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_max_queue_length(void);
static inline int mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_max_queue_length(void) { return mgos_config_get_default_rpc_max_queue_length(); }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_queue_length(int v) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, v); }

/* rpc.default_out_channel_idle_close_timeout */
#define MGOS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(void);
static inline int mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(); }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int v) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, v); }

/* rpc.acl_file */
#define MGOS_CONFIG_HAVE_RPC_ACL_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL_FILE
const char * mgos_config_get_rpc_acl_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_acl_file(void);
static inline const char * mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_acl_file(void) { return mgos_config_get_default_rpc_acl_file(); }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_acl_file(const char * v) { mgos_config_set_rpc_acl_file(&mgos_sys_config, v); }

/* rpc.auth_domain */
#define MGOS_CONFIG_HAVE_RPC_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_DOMAIN
const char * mgos_config_get_rpc_auth_domain(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_auth_domain(void);
static inline const char * mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_auth_domain(void) { return mgos_config_get_default_rpc_auth_domain(); }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_domain(const char * v) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, v); }

/* rpc.auth_file */
#define MGOS_CONFIG_HAVE_RPC_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_FILE
const char * mgos_config_get_rpc_auth_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_auth_file(void);
static inline const char * mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_auth_file(void) { return mgos_config_get_default_rpc_auth_file(); }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_file(const char * v) { mgos_config_set_rpc_auth_file(&mgos_sys_config, v); }

/* rpc.uart */
#define MGOS_CONFIG_HAVE_RPC_UART
#define MGOS_SYS_CONFIG_HAVE_RPC_UART
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc_uart *mgos_sys_config_get_rpc_uart(void) { return mgos_config_get_rpc_uart(&mgos_sys_config); }

/* rpc.uart.uart_no */
#define MGOS_CONFIG_HAVE_RPC_UART_UART_NO
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_UART_NO
int mgos_config_get_rpc_uart_uart_no(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_uart_no(void);
static inline int mgos_sys_config_get_rpc_uart_uart_no(void) { return mgos_config_get_rpc_uart_uart_no(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_uart_no(void) { return mgos_config_get_default_rpc_uart_uart_no(); }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_uart_no(int v) { mgos_config_set_rpc_uart_uart_no(&mgos_sys_config, v); }

/* rpc.uart.baud_rate */
#define MGOS_CONFIG_HAVE_RPC_UART_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_BAUD_RATE
int mgos_config_get_rpc_uart_baud_rate(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_baud_rate(void);
static inline int mgos_sys_config_get_rpc_uart_baud_rate(void) { return mgos_config_get_rpc_uart_baud_rate(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_baud_rate(void) { return mgos_config_get_default_rpc_uart_baud_rate(); }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_baud_rate(int v) { mgos_config_set_rpc_uart_baud_rate(&mgos_sys_config, v); }

/* rpc.uart.fc_type */
#define MGOS_CONFIG_HAVE_RPC_UART_FC_TYPE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_FC_TYPE
int mgos_config_get_rpc_uart_fc_type(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_fc_type(void);
static inline int mgos_sys_config_get_rpc_uart_fc_type(void) { return mgos_config_get_rpc_uart_fc_type(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_fc_type(void) { return mgos_config_get_default_rpc_uart_fc_type(); }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_fc_type(int v) { mgos_config_set_rpc_uart_fc_type(&mgos_sys_config, v); }

/* rpc.uart.dst */
#define MGOS_CONFIG_HAVE_RPC_UART_DST
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_DST
const char * mgos_config_get_rpc_uart_dst(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_uart_dst(void);
static inline const char * mgos_sys_config_get_rpc_uart_dst(void) { return mgos_config_get_rpc_uart_dst(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_uart_dst(void) { return mgos_config_get_default_rpc_uart_dst(); }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_uart_dst(const char * v) { mgos_config_set_rpc_uart_dst(&mgos_sys_config, v); }

/* rpc.ws */
#define MGOS_CONFIG_HAVE_RPC_WS
#define MGOS_SYS_CONFIG_HAVE_RPC_WS
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc_ws *mgos_sys_config_get_rpc_ws(void) { return mgos_config_get_rpc_ws(&mgos_sys_config); }

/* rpc.ws.enable */
#define MGOS_CONFIG_HAVE_RPC_WS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_ENABLE
int mgos_config_get_rpc_ws_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_ws_enable(void);
static inline int mgos_sys_config_get_rpc_ws_enable(void) { return mgos_config_get_rpc_ws_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_ws_enable(void) { return mgos_config_get_default_rpc_ws_enable(); }
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_ws_enable(int v) { mgos_config_set_rpc_ws_enable(&mgos_sys_config, v); }

/* rpc.ws.server_address */
#define MGOS_CONFIG_HAVE_RPC_WS_SERVER_ADDRESS
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SERVER_ADDRESS
const char * mgos_config_get_rpc_ws_server_address(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_ws_server_address(void);
static inline const char * mgos_sys_config_get_rpc_ws_server_address(void) { return mgos_config_get_rpc_ws_server_address(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_ws_server_address(void) { return mgos_config_get_default_rpc_ws_server_address(); }
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_server_address(const char * v) { mgos_config_set_rpc_ws_server_address(&mgos_sys_config, v); }

/* rpc.ws.reconnect_interval_min */
#define MGOS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MIN
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MIN
int mgos_config_get_rpc_ws_reconnect_interval_min(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_ws_reconnect_interval_min(void);
static inline int mgos_sys_config_get_rpc_ws_reconnect_interval_min(void) { return mgos_config_get_rpc_ws_reconnect_interval_min(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_ws_reconnect_interval_min(void) { return mgos_config_get_default_rpc_ws_reconnect_interval_min(); }
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_min(int v) { mgos_config_set_rpc_ws_reconnect_interval_min(&mgos_sys_config, v); }

/* rpc.ws.reconnect_interval_max */
#define MGOS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MAX
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MAX
int mgos_config_get_rpc_ws_reconnect_interval_max(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_ws_reconnect_interval_max(void);
static inline int mgos_sys_config_get_rpc_ws_reconnect_interval_max(void) { return mgos_config_get_rpc_ws_reconnect_interval_max(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_ws_reconnect_interval_max(void) { return mgos_config_get_default_rpc_ws_reconnect_interval_max(); }
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_max(int v) { mgos_config_set_rpc_ws_reconnect_interval_max(&mgos_sys_config, v); }

/* rpc.ws.ssl_server_name */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_SERVER_NAME
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_SERVER_NAME
const char * mgos_config_get_rpc_ws_ssl_server_name(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_ws_ssl_server_name(void);
static inline const char * mgos_sys_config_get_rpc_ws_ssl_server_name(void) { return mgos_config_get_rpc_ws_ssl_server_name(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_ws_ssl_server_name(void) { return mgos_config_get_default_rpc_ws_ssl_server_name(); }
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_ssl_server_name(const char * v) { mgos_config_set_rpc_ws_ssl_server_name(&mgos_sys_config, v); }

/* rpc.ws.ssl_cert */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_CERT
const char * mgos_config_get_rpc_ws_ssl_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_ws_ssl_cert(void);
static inline const char * mgos_sys_config_get_rpc_ws_ssl_cert(void) { return mgos_config_get_rpc_ws_ssl_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_ws_ssl_cert(void) { return mgos_config_get_default_rpc_ws_ssl_cert(); }
void mgos_config_set_rpc_ws_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_ssl_cert(const char * v) { mgos_config_set_rpc_ws_ssl_cert(&mgos_sys_config, v); }

/* rpc.ws.ssl_key */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_KEY
const char * mgos_config_get_rpc_ws_ssl_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_ws_ssl_key(void);
static inline const char * mgos_sys_config_get_rpc_ws_ssl_key(void) { return mgos_config_get_rpc_ws_ssl_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_ws_ssl_key(void) { return mgos_config_get_default_rpc_ws_ssl_key(); }
void mgos_config_set_rpc_ws_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_ssl_key(const char * v) { mgos_config_set_rpc_ws_ssl_key(&mgos_sys_config, v); }

/* rpc.ws.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_CA_CERT
const char * mgos_config_get_rpc_ws_ssl_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_ws_ssl_ca_cert(void);
static inline const char * mgos_sys_config_get_rpc_ws_ssl_ca_cert(void) { return mgos_config_get_rpc_ws_ssl_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_ws_ssl_ca_cert(void) { return mgos_config_get_default_rpc_ws_ssl_ca_cert(); }
void mgos_config_set_rpc_ws_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_ssl_ca_cert(const char * v) { mgos_config_set_rpc_ws_ssl_ca_cert(&mgos_sys_config, v); }

/* wifi */
#define MGOS_CONFIG_HAVE_WIFI
#define MGOS_SYS_CONFIG_HAVE_WIFI
const struct mgos_config_wifi *mgos_config_get_wifi(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi *mgos_sys_config_get_wifi(void) { return mgos_config_get_wifi(&mgos_sys_config); }

/* wifi.ap */
#define MGOS_CONFIG_HAVE_WIFI_AP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_ap *mgos_sys_config_get_wifi_ap(void) { return mgos_config_get_wifi_ap(&mgos_sys_config); }

/* wifi.ap.enable */
#define MGOS_CONFIG_HAVE_WIFI_AP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_ENABLE
int mgos_config_get_wifi_ap_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_enable(void);
static inline int mgos_sys_config_get_wifi_ap_enable(void) { return mgos_config_get_wifi_ap_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_enable(void) { return mgos_config_get_default_wifi_ap_enable(); }
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_enable(int v) { mgos_config_set_wifi_ap_enable(&mgos_sys_config, v); }

/* wifi.ap.ssid */
#define MGOS_CONFIG_HAVE_WIFI_AP_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_SSID
const char * mgos_config_get_wifi_ap_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_ssid(void);
static inline const char * mgos_sys_config_get_wifi_ap_ssid(void) { return mgos_config_get_wifi_ap_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_ssid(void) { return mgos_config_get_default_wifi_ap_ssid(); }
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_ssid(const char * v) { mgos_config_set_wifi_ap_ssid(&mgos_sys_config, v); }

/* wifi.ap.pass */
#define MGOS_CONFIG_HAVE_WIFI_AP_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_PASS
const char * mgos_config_get_wifi_ap_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_pass(void);
static inline const char * mgos_sys_config_get_wifi_ap_pass(void) { return mgos_config_get_wifi_ap_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_pass(void) { return mgos_config_get_default_wifi_ap_pass(); }
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_pass(const char * v) { mgos_config_set_wifi_ap_pass(&mgos_sys_config, v); }

/* wifi.ap.hidden */
#define MGOS_CONFIG_HAVE_WIFI_AP_HIDDEN
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HIDDEN
int mgos_config_get_wifi_ap_hidden(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_hidden(void);
static inline int mgos_sys_config_get_wifi_ap_hidden(void) { return mgos_config_get_wifi_ap_hidden(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_hidden(void) { return mgos_config_get_default_wifi_ap_hidden(); }
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_hidden(int v) { mgos_config_set_wifi_ap_hidden(&mgos_sys_config, v); }

/* wifi.ap.channel */
#define MGOS_CONFIG_HAVE_WIFI_AP_CHANNEL
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_CHANNEL
int mgos_config_get_wifi_ap_channel(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_channel(void);
static inline int mgos_sys_config_get_wifi_ap_channel(void) { return mgos_config_get_wifi_ap_channel(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_channel(void) { return mgos_config_get_default_wifi_ap_channel(); }
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_channel(int v) { mgos_config_set_wifi_ap_channel(&mgos_sys_config, v); }

/* wifi.ap.max_connections */
#define MGOS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
int mgos_config_get_wifi_ap_max_connections(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_max_connections(void);
static inline int mgos_sys_config_get_wifi_ap_max_connections(void) { return mgos_config_get_wifi_ap_max_connections(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_max_connections(void) { return mgos_config_get_default_wifi_ap_max_connections(); }
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_max_connections(int v) { mgos_config_set_wifi_ap_max_connections(&mgos_sys_config, v); }

/* wifi.ap.ip */
#define MGOS_CONFIG_HAVE_WIFI_AP_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_IP
const char * mgos_config_get_wifi_ap_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_ip(void);
static inline const char * mgos_sys_config_get_wifi_ap_ip(void) { return mgos_config_get_wifi_ap_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_ip(void) { return mgos_config_get_default_wifi_ap_ip(); }
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_ip(const char * v) { mgos_config_set_wifi_ap_ip(&mgos_sys_config, v); }

/* wifi.ap.netmask */
#define MGOS_CONFIG_HAVE_WIFI_AP_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_NETMASK
const char * mgos_config_get_wifi_ap_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_netmask(void);
static inline const char * mgos_sys_config_get_wifi_ap_netmask(void) { return mgos_config_get_wifi_ap_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_netmask(void) { return mgos_config_get_default_wifi_ap_netmask(); }
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_netmask(const char * v) { mgos_config_set_wifi_ap_netmask(&mgos_sys_config, v); }

/* wifi.ap.gw */
#define MGOS_CONFIG_HAVE_WIFI_AP_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_GW
const char * mgos_config_get_wifi_ap_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_gw(void);
static inline const char * mgos_sys_config_get_wifi_ap_gw(void) { return mgos_config_get_wifi_ap_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_gw(void) { return mgos_config_get_default_wifi_ap_gw(); }
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_gw(const char * v) { mgos_config_set_wifi_ap_gw(&mgos_sys_config, v); }

/* wifi.ap.dhcp_start */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_START
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_START
const char * mgos_config_get_wifi_ap_dhcp_start(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_dhcp_start(void);
static inline const char * mgos_sys_config_get_wifi_ap_dhcp_start(void) { return mgos_config_get_wifi_ap_dhcp_start(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_dhcp_start(void) { return mgos_config_get_default_wifi_ap_dhcp_start(); }
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_dhcp_start(const char * v) { mgos_config_set_wifi_ap_dhcp_start(&mgos_sys_config, v); }

/* wifi.ap.dhcp_end */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_END
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_END
const char * mgos_config_get_wifi_ap_dhcp_end(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_dhcp_end(void);
static inline const char * mgos_sys_config_get_wifi_ap_dhcp_end(void) { return mgos_config_get_wifi_ap_dhcp_end(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_dhcp_end(void) { return mgos_config_get_default_wifi_ap_dhcp_end(); }
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_dhcp_end(const char * v) { mgos_config_set_wifi_ap_dhcp_end(&mgos_sys_config, v); }

/* wifi.ap.trigger_on_gpio */
#define MGOS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
int mgos_config_get_wifi_ap_trigger_on_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_trigger_on_gpio(void);
static inline int mgos_sys_config_get_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_wifi_ap_trigger_on_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_default_wifi_ap_trigger_on_gpio(); }
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_trigger_on_gpio(int v) { mgos_config_set_wifi_ap_trigger_on_gpio(&mgos_sys_config, v); }

/* wifi.ap.disable_after */
#define MGOS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
int mgos_config_get_wifi_ap_disable_after(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_disable_after(void);
static inline int mgos_sys_config_get_wifi_ap_disable_after(void) { return mgos_config_get_wifi_ap_disable_after(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_disable_after(void) { return mgos_config_get_default_wifi_ap_disable_after(); }
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_disable_after(int v) { mgos_config_set_wifi_ap_disable_after(&mgos_sys_config, v); }

/* wifi.ap.hostname */
#define MGOS_CONFIG_HAVE_WIFI_AP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HOSTNAME
const char * mgos_config_get_wifi_ap_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_hostname(void);
static inline const char * mgos_sys_config_get_wifi_ap_hostname(void) { return mgos_config_get_wifi_ap_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_hostname(void) { return mgos_config_get_default_wifi_ap_hostname(); }
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_hostname(const char * v) { mgos_config_set_wifi_ap_hostname(&mgos_sys_config, v); }

/* wifi.ap.keep_enabled */
#define MGOS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
int mgos_config_get_wifi_ap_keep_enabled(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_keep_enabled(void);
static inline int mgos_sys_config_get_wifi_ap_keep_enabled(void) { return mgos_config_get_wifi_ap_keep_enabled(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_keep_enabled(void) { return mgos_config_get_default_wifi_ap_keep_enabled(); }
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_keep_enabled(int v) { mgos_config_set_wifi_ap_keep_enabled(&mgos_sys_config, v); }

/* wifi.sta */
#define MGOS_CONFIG_HAVE_WIFI_STA
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta(void) { return mgos_config_get_wifi_sta(&mgos_sys_config); }

/* wifi.sta.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ENABLE
int mgos_config_get_wifi_sta_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_enable(void);
static inline int mgos_sys_config_get_wifi_sta_enable(void) { return mgos_config_get_wifi_sta_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_enable(void) { return mgos_config_get_default_wifi_sta_enable(); }
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_enable(int v) { mgos_config_set_wifi_sta_enable(&mgos_sys_config, v); }

/* wifi.sta.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_SSID
const char * mgos_config_get_wifi_sta_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_ssid(void);
static inline const char * mgos_sys_config_get_wifi_sta_ssid(void) { return mgos_config_get_wifi_sta_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_ssid(void) { return mgos_config_get_default_wifi_sta_ssid(); }
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ssid(const char * v) { mgos_config_set_wifi_sta_ssid(&mgos_sys_config, v); }

/* wifi.sta.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PASS
const char * mgos_config_get_wifi_sta_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_pass(void);
static inline const char * mgos_sys_config_get_wifi_sta_pass(void) { return mgos_config_get_wifi_sta_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_pass(void) { return mgos_config_get_default_wifi_sta_pass(); }
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_pass(const char * v) { mgos_config_set_wifi_sta_pass(&mgos_sys_config, v); }

/* wifi.sta.user */
#define MGOS_CONFIG_HAVE_WIFI_STA_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_USER
const char * mgos_config_get_wifi_sta_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_user(void);
static inline const char * mgos_sys_config_get_wifi_sta_user(void) { return mgos_config_get_wifi_sta_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_user(void) { return mgos_config_get_default_wifi_sta_user(); }
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_user(const char * v) { mgos_config_set_wifi_sta_user(&mgos_sys_config, v); }

/* wifi.sta.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
const char * mgos_config_get_wifi_sta_anon_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_anon_identity(void);
static inline const char * mgos_sys_config_get_wifi_sta_anon_identity(void) { return mgos_config_get_wifi_sta_anon_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_anon_identity(void) { return mgos_config_get_default_wifi_sta_anon_identity(); }
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_anon_identity(const char * v) { mgos_config_set_wifi_sta_anon_identity(&mgos_sys_config, v); }

/* wifi.sta.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CERT
const char * mgos_config_get_wifi_sta_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta_cert(void) { return mgos_config_get_wifi_sta_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_cert(void) { return mgos_config_get_default_wifi_sta_cert(); }
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_cert(const char * v) { mgos_config_set_wifi_sta_cert(&mgos_sys_config, v); }

/* wifi.sta.key */
#define MGOS_CONFIG_HAVE_WIFI_STA_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_KEY
const char * mgos_config_get_wifi_sta_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_key(void);
static inline const char * mgos_sys_config_get_wifi_sta_key(void) { return mgos_config_get_wifi_sta_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_key(void) { return mgos_config_get_default_wifi_sta_key(); }
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_key(const char * v) { mgos_config_set_wifi_sta_key(&mgos_sys_config, v); }

/* wifi.sta.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CA_CERT
const char * mgos_config_get_wifi_sta_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_ca_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta_ca_cert(void) { return mgos_config_get_wifi_sta_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_ca_cert(void) { return mgos_config_get_default_wifi_sta_ca_cert(); }
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ca_cert(const char * v) { mgos_config_set_wifi_sta_ca_cert(&mgos_sys_config, v); }

/* wifi.sta.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_IP
const char * mgos_config_get_wifi_sta_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_ip(void);
static inline const char * mgos_sys_config_get_wifi_sta_ip(void) { return mgos_config_get_wifi_sta_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_ip(void) { return mgos_config_get_default_wifi_sta_ip(); }
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ip(const char * v) { mgos_config_set_wifi_sta_ip(&mgos_sys_config, v); }

/* wifi.sta.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NETMASK
const char * mgos_config_get_wifi_sta_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_netmask(void);
static inline const char * mgos_sys_config_get_wifi_sta_netmask(void) { return mgos_config_get_wifi_sta_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_netmask(void) { return mgos_config_get_default_wifi_sta_netmask(); }
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_netmask(const char * v) { mgos_config_set_wifi_sta_netmask(&mgos_sys_config, v); }

/* wifi.sta.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_GW
const char * mgos_config_get_wifi_sta_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_gw(void);
static inline const char * mgos_sys_config_get_wifi_sta_gw(void) { return mgos_config_get_wifi_sta_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_gw(void) { return mgos_config_get_default_wifi_sta_gw(); }
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_gw(const char * v) { mgos_config_set_wifi_sta_gw(&mgos_sys_config, v); }

/* wifi.sta.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NAMESERVER
const char * mgos_config_get_wifi_sta_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_nameserver(void);
static inline const char * mgos_sys_config_get_wifi_sta_nameserver(void) { return mgos_config_get_wifi_sta_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_nameserver(void) { return mgos_config_get_default_wifi_sta_nameserver(); }
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_nameserver(const char * v) { mgos_config_set_wifi_sta_nameserver(&mgos_sys_config, v); }

/* wifi.sta.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_wifi_sta_dhcp_hostname(void) { return mgos_config_get_wifi_sta_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_dhcp_hostname(void) { return mgos_config_get_default_wifi_sta_dhcp_hostname(); }
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta1 */
#define MGOS_CONFIG_HAVE_WIFI_STA1
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta1(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta1(void) { return mgos_config_get_wifi_sta1(&mgos_sys_config); }

/* wifi.sta1.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ENABLE
int mgos_config_get_wifi_sta1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta1_enable(void);
static inline int mgos_sys_config_get_wifi_sta1_enable(void) { return mgos_config_get_wifi_sta1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta1_enable(void) { return mgos_config_get_default_wifi_sta1_enable(); }
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta1_enable(int v) { mgos_config_set_wifi_sta1_enable(&mgos_sys_config, v); }

/* wifi.sta1.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA1_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_SSID
const char * mgos_config_get_wifi_sta1_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_ssid(void);
static inline const char * mgos_sys_config_get_wifi_sta1_ssid(void) { return mgos_config_get_wifi_sta1_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_ssid(void) { return mgos_config_get_default_wifi_sta1_ssid(); }
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ssid(const char * v) { mgos_config_set_wifi_sta1_ssid(&mgos_sys_config, v); }

/* wifi.sta1.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA1_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_PASS
const char * mgos_config_get_wifi_sta1_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_pass(void);
static inline const char * mgos_sys_config_get_wifi_sta1_pass(void) { return mgos_config_get_wifi_sta1_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_pass(void) { return mgos_config_get_default_wifi_sta1_pass(); }
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_pass(const char * v) { mgos_config_set_wifi_sta1_pass(&mgos_sys_config, v); }

/* wifi.sta1.user */
#define MGOS_CONFIG_HAVE_WIFI_STA1_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_USER
const char * mgos_config_get_wifi_sta1_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_user(void);
static inline const char * mgos_sys_config_get_wifi_sta1_user(void) { return mgos_config_get_wifi_sta1_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_user(void) { return mgos_config_get_default_wifi_sta1_user(); }
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_user(const char * v) { mgos_config_set_wifi_sta1_user(&mgos_sys_config, v); }

/* wifi.sta1.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
const char * mgos_config_get_wifi_sta1_anon_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_anon_identity(void);
static inline const char * mgos_sys_config_get_wifi_sta1_anon_identity(void) { return mgos_config_get_wifi_sta1_anon_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_anon_identity(void) { return mgos_config_get_default_wifi_sta1_anon_identity(); }
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_anon_identity(const char * v) { mgos_config_set_wifi_sta1_anon_identity(&mgos_sys_config, v); }

/* wifi.sta1.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CERT
const char * mgos_config_get_wifi_sta1_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta1_cert(void) { return mgos_config_get_wifi_sta1_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_cert(void) { return mgos_config_get_default_wifi_sta1_cert(); }
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_cert(const char * v) { mgos_config_set_wifi_sta1_cert(&mgos_sys_config, v); }

/* wifi.sta1.key */
#define MGOS_CONFIG_HAVE_WIFI_STA1_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_KEY
const char * mgos_config_get_wifi_sta1_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_key(void);
static inline const char * mgos_sys_config_get_wifi_sta1_key(void) { return mgos_config_get_wifi_sta1_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_key(void) { return mgos_config_get_default_wifi_sta1_key(); }
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_key(const char * v) { mgos_config_set_wifi_sta1_key(&mgos_sys_config, v); }

/* wifi.sta1.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CA_CERT
const char * mgos_config_get_wifi_sta1_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_ca_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta1_ca_cert(void) { return mgos_config_get_wifi_sta1_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_ca_cert(void) { return mgos_config_get_default_wifi_sta1_ca_cert(); }
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ca_cert(const char * v) { mgos_config_set_wifi_sta1_ca_cert(&mgos_sys_config, v); }

/* wifi.sta1.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA1_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_IP
const char * mgos_config_get_wifi_sta1_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_ip(void);
static inline const char * mgos_sys_config_get_wifi_sta1_ip(void) { return mgos_config_get_wifi_sta1_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_ip(void) { return mgos_config_get_default_wifi_sta1_ip(); }
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ip(const char * v) { mgos_config_set_wifi_sta1_ip(&mgos_sys_config, v); }

/* wifi.sta1.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NETMASK
const char * mgos_config_get_wifi_sta1_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_netmask(void);
static inline const char * mgos_sys_config_get_wifi_sta1_netmask(void) { return mgos_config_get_wifi_sta1_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_netmask(void) { return mgos_config_get_default_wifi_sta1_netmask(); }
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_netmask(const char * v) { mgos_config_set_wifi_sta1_netmask(&mgos_sys_config, v); }

/* wifi.sta1.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA1_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_GW
const char * mgos_config_get_wifi_sta1_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_gw(void);
static inline const char * mgos_sys_config_get_wifi_sta1_gw(void) { return mgos_config_get_wifi_sta1_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_gw(void) { return mgos_config_get_default_wifi_sta1_gw(); }
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_gw(const char * v) { mgos_config_set_wifi_sta1_gw(&mgos_sys_config, v); }

/* wifi.sta1.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
const char * mgos_config_get_wifi_sta1_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_nameserver(void);
static inline const char * mgos_sys_config_get_wifi_sta1_nameserver(void) { return mgos_config_get_wifi_sta1_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_nameserver(void) { return mgos_config_get_default_wifi_sta1_nameserver(); }
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_nameserver(const char * v) { mgos_config_set_wifi_sta1_nameserver(&mgos_sys_config, v); }

/* wifi.sta1.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta1_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_wifi_sta1_dhcp_hostname(void) { return mgos_config_get_wifi_sta1_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_dhcp_hostname(void) { return mgos_config_get_default_wifi_sta1_dhcp_hostname(); }
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta1_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta2 */
#define MGOS_CONFIG_HAVE_WIFI_STA2
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta2(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta2(void) { return mgos_config_get_wifi_sta2(&mgos_sys_config); }

/* wifi.sta2.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ENABLE
int mgos_config_get_wifi_sta2_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta2_enable(void);
static inline int mgos_sys_config_get_wifi_sta2_enable(void) { return mgos_config_get_wifi_sta2_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta2_enable(void) { return mgos_config_get_default_wifi_sta2_enable(); }
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta2_enable(int v) { mgos_config_set_wifi_sta2_enable(&mgos_sys_config, v); }

/* wifi.sta2.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA2_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_SSID
const char * mgos_config_get_wifi_sta2_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_ssid(void);
static inline const char * mgos_sys_config_get_wifi_sta2_ssid(void) { return mgos_config_get_wifi_sta2_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_ssid(void) { return mgos_config_get_default_wifi_sta2_ssid(); }
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ssid(const char * v) { mgos_config_set_wifi_sta2_ssid(&mgos_sys_config, v); }

/* wifi.sta2.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA2_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_PASS
const char * mgos_config_get_wifi_sta2_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_pass(void);
static inline const char * mgos_sys_config_get_wifi_sta2_pass(void) { return mgos_config_get_wifi_sta2_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_pass(void) { return mgos_config_get_default_wifi_sta2_pass(); }
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_pass(const char * v) { mgos_config_set_wifi_sta2_pass(&mgos_sys_config, v); }

/* wifi.sta2.user */
#define MGOS_CONFIG_HAVE_WIFI_STA2_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_USER
const char * mgos_config_get_wifi_sta2_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_user(void);
static inline const char * mgos_sys_config_get_wifi_sta2_user(void) { return mgos_config_get_wifi_sta2_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_user(void) { return mgos_config_get_default_wifi_sta2_user(); }
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_user(const char * v) { mgos_config_set_wifi_sta2_user(&mgos_sys_config, v); }

/* wifi.sta2.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
const char * mgos_config_get_wifi_sta2_anon_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_anon_identity(void);
static inline const char * mgos_sys_config_get_wifi_sta2_anon_identity(void) { return mgos_config_get_wifi_sta2_anon_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_anon_identity(void) { return mgos_config_get_default_wifi_sta2_anon_identity(); }
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_anon_identity(const char * v) { mgos_config_set_wifi_sta2_anon_identity(&mgos_sys_config, v); }

/* wifi.sta2.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CERT
const char * mgos_config_get_wifi_sta2_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta2_cert(void) { return mgos_config_get_wifi_sta2_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_cert(void) { return mgos_config_get_default_wifi_sta2_cert(); }
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_cert(const char * v) { mgos_config_set_wifi_sta2_cert(&mgos_sys_config, v); }

/* wifi.sta2.key */
#define MGOS_CONFIG_HAVE_WIFI_STA2_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_KEY
const char * mgos_config_get_wifi_sta2_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_key(void);
static inline const char * mgos_sys_config_get_wifi_sta2_key(void) { return mgos_config_get_wifi_sta2_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_key(void) { return mgos_config_get_default_wifi_sta2_key(); }
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_key(const char * v) { mgos_config_set_wifi_sta2_key(&mgos_sys_config, v); }

/* wifi.sta2.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CA_CERT
const char * mgos_config_get_wifi_sta2_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_ca_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta2_ca_cert(void) { return mgos_config_get_wifi_sta2_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_ca_cert(void) { return mgos_config_get_default_wifi_sta2_ca_cert(); }
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ca_cert(const char * v) { mgos_config_set_wifi_sta2_ca_cert(&mgos_sys_config, v); }

/* wifi.sta2.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA2_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_IP
const char * mgos_config_get_wifi_sta2_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_ip(void);
static inline const char * mgos_sys_config_get_wifi_sta2_ip(void) { return mgos_config_get_wifi_sta2_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_ip(void) { return mgos_config_get_default_wifi_sta2_ip(); }
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ip(const char * v) { mgos_config_set_wifi_sta2_ip(&mgos_sys_config, v); }

/* wifi.sta2.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NETMASK
const char * mgos_config_get_wifi_sta2_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_netmask(void);
static inline const char * mgos_sys_config_get_wifi_sta2_netmask(void) { return mgos_config_get_wifi_sta2_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_netmask(void) { return mgos_config_get_default_wifi_sta2_netmask(); }
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_netmask(const char * v) { mgos_config_set_wifi_sta2_netmask(&mgos_sys_config, v); }

/* wifi.sta2.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA2_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_GW
const char * mgos_config_get_wifi_sta2_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_gw(void);
static inline const char * mgos_sys_config_get_wifi_sta2_gw(void) { return mgos_config_get_wifi_sta2_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_gw(void) { return mgos_config_get_default_wifi_sta2_gw(); }
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_gw(const char * v) { mgos_config_set_wifi_sta2_gw(&mgos_sys_config, v); }

/* wifi.sta2.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
const char * mgos_config_get_wifi_sta2_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_nameserver(void);
static inline const char * mgos_sys_config_get_wifi_sta2_nameserver(void) { return mgos_config_get_wifi_sta2_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_nameserver(void) { return mgos_config_get_default_wifi_sta2_nameserver(); }
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_nameserver(const char * v) { mgos_config_set_wifi_sta2_nameserver(&mgos_sys_config, v); }

/* wifi.sta2.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta2_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_wifi_sta2_dhcp_hostname(void) { return mgos_config_get_wifi_sta2_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_dhcp_hostname(void) { return mgos_config_get_default_wifi_sta2_dhcp_hostname(); }
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta2_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta_cfg_idx */
#define MGOS_CONFIG_HAVE_WIFI_STA_CFG_IDX
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CFG_IDX
int mgos_config_get_wifi_sta_cfg_idx(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_cfg_idx(void);
static inline int mgos_sys_config_get_wifi_sta_cfg_idx(void) { return mgos_config_get_wifi_sta_cfg_idx(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_cfg_idx(void) { return mgos_config_get_default_wifi_sta_cfg_idx(); }
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_cfg_idx(int v) { mgos_config_set_wifi_sta_cfg_idx(&mgos_sys_config, v); }

/* wifi.sta_connect_timeout */
#define MGOS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
int mgos_config_get_wifi_sta_connect_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_connect_timeout(void);
static inline int mgos_sys_config_get_wifi_sta_connect_timeout(void) { return mgos_config_get_wifi_sta_connect_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_connect_timeout(void) { return mgos_config_get_default_wifi_sta_connect_timeout(); }
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_connect_timeout(int v) { mgos_config_set_wifi_sta_connect_timeout(&mgos_sys_config, v); }

/* wifi.sta_all_chan_scan */
#define MGOS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
int mgos_config_get_wifi_sta_all_chan_scan(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_all_chan_scan(void);
static inline int mgos_sys_config_get_wifi_sta_all_chan_scan(void) { return mgos_config_get_wifi_sta_all_chan_scan(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_all_chan_scan(void) { return mgos_config_get_default_wifi_sta_all_chan_scan(); }
void mgos_config_set_wifi_sta_all_chan_scan(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_all_chan_scan(int v) { mgos_config_set_wifi_sta_all_chan_scan(&mgos_sys_config, v); }

/* board */
#define MGOS_CONFIG_HAVE_BOARD
#define MGOS_SYS_CONFIG_HAVE_BOARD
const struct mgos_config_board *mgos_config_get_board(const struct mgos_config *cfg);
static inline const struct mgos_config_board *mgos_sys_config_get_board(void) { return mgos_config_get_board(&mgos_sys_config); }

/* board.led1 */
#define MGOS_CONFIG_HAVE_BOARD_LED1
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1
const struct mgos_config_board_led1 *mgos_config_get_board_led1(const struct mgos_config *cfg);
static inline const struct mgos_config_board_led1 *mgos_sys_config_get_board_led1(void) { return mgos_config_get_board_led1(&mgos_sys_config); }

/* board.led1.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_PIN
int mgos_config_get_board_led1_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_led1_pin(void);
static inline int mgos_sys_config_get_board_led1_pin(void) { return mgos_config_get_board_led1_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led1_pin(void) { return mgos_config_get_default_board_led1_pin(); }
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led1_pin(int v) { mgos_config_set_board_led1_pin(&mgos_sys_config, v); }

/* board.led1.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
int mgos_config_get_board_led1_active_high(const struct mgos_config *cfg);
int mgos_config_get_default_board_led1_active_high(void);
static inline int mgos_sys_config_get_board_led1_active_high(void) { return mgos_config_get_board_led1_active_high(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led1_active_high(void) { return mgos_config_get_default_board_led1_active_high(); }
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led1_active_high(int v) { mgos_config_set_board_led1_active_high(&mgos_sys_config, v); }

/* board.led2 */
#define MGOS_CONFIG_HAVE_BOARD_LED2
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2
const struct mgos_config_board_led2 *mgos_config_get_board_led2(const struct mgos_config *cfg);
static inline const struct mgos_config_board_led2 *mgos_sys_config_get_board_led2(void) { return mgos_config_get_board_led2(&mgos_sys_config); }

/* board.led2.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_PIN
int mgos_config_get_board_led2_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_led2_pin(void);
static inline int mgos_sys_config_get_board_led2_pin(void) { return mgos_config_get_board_led2_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led2_pin(void) { return mgos_config_get_default_board_led2_pin(); }
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led2_pin(int v) { mgos_config_set_board_led2_pin(&mgos_sys_config, v); }

/* board.led2.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
int mgos_config_get_board_led2_active_high(const struct mgos_config *cfg);
int mgos_config_get_default_board_led2_active_high(void);
static inline int mgos_sys_config_get_board_led2_active_high(void) { return mgos_config_get_board_led2_active_high(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led2_active_high(void) { return mgos_config_get_default_board_led2_active_high(); }
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led2_active_high(int v) { mgos_config_set_board_led2_active_high(&mgos_sys_config, v); }

/* board.led3 */
#define MGOS_CONFIG_HAVE_BOARD_LED3
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3
const struct mgos_config_board_led3 *mgos_config_get_board_led3(const struct mgos_config *cfg);
static inline const struct mgos_config_board_led3 *mgos_sys_config_get_board_led3(void) { return mgos_config_get_board_led3(&mgos_sys_config); }

/* board.led3.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_PIN
int mgos_config_get_board_led3_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_led3_pin(void);
static inline int mgos_sys_config_get_board_led3_pin(void) { return mgos_config_get_board_led3_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led3_pin(void) { return mgos_config_get_default_board_led3_pin(); }
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led3_pin(int v) { mgos_config_set_board_led3_pin(&mgos_sys_config, v); }

/* board.led3.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
int mgos_config_get_board_led3_active_high(const struct mgos_config *cfg);
int mgos_config_get_default_board_led3_active_high(void);
static inline int mgos_sys_config_get_board_led3_active_high(void) { return mgos_config_get_board_led3_active_high(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led3_active_high(void) { return mgos_config_get_default_board_led3_active_high(); }
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led3_active_high(int v) { mgos_config_set_board_led3_active_high(&mgos_sys_config, v); }

/* board.btn1 */
#define MGOS_CONFIG_HAVE_BOARD_BTN1
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1
const struct mgos_config_board_btn1 *mgos_config_get_board_btn1(const struct mgos_config *cfg);
static inline const struct mgos_config_board_btn1 *mgos_sys_config_get_board_btn1(void) { return mgos_config_get_board_btn1(&mgos_sys_config); }

/* board.btn1.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PIN
int mgos_config_get_board_btn1_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn1_pin(void);
static inline int mgos_sys_config_get_board_btn1_pin(void) { return mgos_config_get_board_btn1_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn1_pin(void) { return mgos_config_get_default_board_btn1_pin(); }
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn1_pin(int v) { mgos_config_set_board_btn1_pin(&mgos_sys_config, v); }

/* board.btn1.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
int mgos_config_get_board_btn1_pull_up(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn1_pull_up(void);
static inline int mgos_sys_config_get_board_btn1_pull_up(void) { return mgos_config_get_board_btn1_pull_up(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn1_pull_up(void) { return mgos_config_get_default_board_btn1_pull_up(); }
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn1_pull_up(int v) { mgos_config_set_board_btn1_pull_up(&mgos_sys_config, v); }

/* board.btn2 */
#define MGOS_CONFIG_HAVE_BOARD_BTN2
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2
const struct mgos_config_board_btn2 *mgos_config_get_board_btn2(const struct mgos_config *cfg);
static inline const struct mgos_config_board_btn2 *mgos_sys_config_get_board_btn2(void) { return mgos_config_get_board_btn2(&mgos_sys_config); }

/* board.btn2.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PIN
int mgos_config_get_board_btn2_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn2_pin(void);
static inline int mgos_sys_config_get_board_btn2_pin(void) { return mgos_config_get_board_btn2_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn2_pin(void) { return mgos_config_get_default_board_btn2_pin(); }
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn2_pin(int v) { mgos_config_set_board_btn2_pin(&mgos_sys_config, v); }

/* board.btn2.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
int mgos_config_get_board_btn2_pull_up(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn2_pull_up(void);
static inline int mgos_sys_config_get_board_btn2_pull_up(void) { return mgos_config_get_board_btn2_pull_up(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn2_pull_up(void) { return mgos_config_get_default_board_btn2_pull_up(); }
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn2_pull_up(int v) { mgos_config_set_board_btn2_pull_up(&mgos_sys_config, v); }

/* board.btn3 */
#define MGOS_CONFIG_HAVE_BOARD_BTN3
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3
const struct mgos_config_board_btn3 *mgos_config_get_board_btn3(const struct mgos_config *cfg);
static inline const struct mgos_config_board_btn3 *mgos_sys_config_get_board_btn3(void) { return mgos_config_get_board_btn3(&mgos_sys_config); }

/* board.btn3.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PIN
int mgos_config_get_board_btn3_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn3_pin(void);
static inline int mgos_sys_config_get_board_btn3_pin(void) { return mgos_config_get_board_btn3_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn3_pin(void) { return mgos_config_get_default_board_btn3_pin(); }
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn3_pin(int v) { mgos_config_set_board_btn3_pin(&mgos_sys_config, v); }

/* board.btn3.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
int mgos_config_get_board_btn3_pull_up(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn3_pull_up(void);
static inline int mgos_sys_config_get_board_btn3_pull_up(void) { return mgos_config_get_board_btn3_pull_up(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn3_pull_up(void) { return mgos_config_get_default_board_btn3_pull_up(); }
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn3_pull_up(int v) { mgos_config_set_board_btn3_pull_up(&mgos_sys_config, v); }

bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value);
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings);

bool mgos_config_is_default_str(const char *s);

/* Backward compatibility. */
const struct mgos_conf_entry *mgos_config_schema(void);

#ifdef __cplusplus
}
#endif