/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.19.1/apps/mos-serverus-panel-ergo/esp8266/build_contexts/build_ctx_688003925/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /data/fwbuild-volumes/2.19.1/apps/mos-serverus-panel-ergo/esp8266/build_contexts/build_ctx_688003925/build/gen/mos_conf_schema.yml
 */

#include "mgos_config.h"

#include <stdbool.h>

#include "mgos_config_util.h"


/* struct mgos_config */
static const struct mgos_conf_entry mgos_config_schema_[] = {
    {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 253},
    {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 10},
    {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
    {.type = CONF_TYPE_INT, .key = "udp_log_level", .offset = offsetof(struct mgos_config, debug.udp_log_level)},
    {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
    {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
    {.type = CONF_TYPE_STRING, .key = "file_level", .offset = offsetof(struct mgos_config, debug.file_level)},
    {.type = CONF_TYPE_INT, .key = "event_level", .offset = offsetof(struct mgos_config, debug.event_level)},
    {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
    {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
    {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
    {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
    {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 5},
    {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
    {.type = CONF_TYPE_STRING, .key = "license", .offset = offsetof(struct mgos_config, device.license)},
    {.type = CONF_TYPE_STRING, .key = "mac", .offset = offsetof(struct mgos_config, device.mac)},
    {.type = CONF_TYPE_STRING, .key = "public_key", .offset = offsetof(struct mgos_config, device.public_key)},
    {.type = CONF_TYPE_STRING, .key = "sn", .offset = offsetof(struct mgos_config, device.sn)},
    {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 3},
    {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
    {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
    {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
    {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
    {.type = CONF_TYPE_OBJECT, .key = "http", .offset = offsetof(struct mgos_config, http), .num_desc = 12},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, http.enable)},
    {.type = CONF_TYPE_STRING, .key = "listen_addr", .offset = offsetof(struct mgos_config, http.listen_addr)},
    {.type = CONF_TYPE_STRING, .key = "document_root", .offset = offsetof(struct mgos_config, http.document_root)},
    {.type = CONF_TYPE_STRING, .key = "index_files", .offset = offsetof(struct mgos_config, http.index_files)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, http.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, http.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, http.ssl_ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "upload_acl", .offset = offsetof(struct mgos_config, http.upload_acl)},
    {.type = CONF_TYPE_STRING, .key = "hidden_files", .offset = offsetof(struct mgos_config, http.hidden_files)},
    {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, http.auth_domain)},
    {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, http.auth_file)},
    {.type = CONF_TYPE_STRING, .key = "extra_headers", .offset = offsetof(struct mgos_config, http.extra_headers)},
    {.type = CONF_TYPE_OBJECT, .key = "mdash", .offset = offsetof(struct mgos_config, mdash), .num_desc = 112},
    {.type = CONF_TYPE_STRING, .key = "device_id", .offset = offsetof(struct mgos_config, mdash.device_id)},
    {.type = CONF_TYPE_STRING, .key = "api_key", .offset = offsetof(struct mgos_config, mdash.api_key)},
    {.type = CONF_TYPE_OBJECT, .key = "value", .offset = offsetof(struct mgos_config, mdash.value), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value.key)},
    {.type = CONF_TYPE_OBJECT, .key = "value1", .offset = offsetof(struct mgos_config, mdash.value1), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value1.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value1.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value1.key)},
    {.type = CONF_TYPE_OBJECT, .key = "value2", .offset = offsetof(struct mgos_config, mdash.value2), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value2.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value2.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value2.key)},
    {.type = CONF_TYPE_OBJECT, .key = "value3", .offset = offsetof(struct mgos_config, mdash.value3), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value3.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value3.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value3.key)},
    {.type = CONF_TYPE_OBJECT, .key = "value4", .offset = offsetof(struct mgos_config, mdash.value4), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value4.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value4.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value4.key)},
    {.type = CONF_TYPE_OBJECT, .key = "value5", .offset = offsetof(struct mgos_config, mdash.value5), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value5.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value5.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value5.key)},
    {.type = CONF_TYPE_OBJECT, .key = "value6", .offset = offsetof(struct mgos_config, mdash.value6), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value6.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value6.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value6.key)},
    {.type = CONF_TYPE_OBJECT, .key = "value7", .offset = offsetof(struct mgos_config, mdash.value7), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value7.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value7.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value7.key)},
    {.type = CONF_TYPE_OBJECT, .key = "value8", .offset = offsetof(struct mgos_config, mdash.value8), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value8.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value8.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value8.key)},
    {.type = CONF_TYPE_OBJECT, .key = "value9", .offset = offsetof(struct mgos_config, mdash.value9), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.value9.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.value9.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.value9.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input", .offset = offsetof(struct mgos_config, mdash.input), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input1", .offset = offsetof(struct mgos_config, mdash.input1), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input1.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input1.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input1.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input2", .offset = offsetof(struct mgos_config, mdash.input2), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input2.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input2.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input2.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input3", .offset = offsetof(struct mgos_config, mdash.input3), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input3.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input3.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input3.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input4", .offset = offsetof(struct mgos_config, mdash.input4), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input4.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input4.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input4.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input5", .offset = offsetof(struct mgos_config, mdash.input5), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input5.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input5.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input5.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input6", .offset = offsetof(struct mgos_config, mdash.input6), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input6.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input6.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input6.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input7", .offset = offsetof(struct mgos_config, mdash.input7), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input7.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input7.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input7.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input8", .offset = offsetof(struct mgos_config, mdash.input8), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input8.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input8.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input8.key)},
    {.type = CONF_TYPE_OBJECT, .key = "input9", .offset = offsetof(struct mgos_config, mdash.input9), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.input9.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.input9.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.input9.key)},
    {.type = CONF_TYPE_OBJECT, .key = "toggle", .offset = offsetof(struct mgos_config, mdash.toggle), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.toggle.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.toggle.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.toggle.key)},
    {.type = CONF_TYPE_OBJECT, .key = "toggle1", .offset = offsetof(struct mgos_config, mdash.toggle1), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.toggle1.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.toggle1.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.toggle1.key)},
    {.type = CONF_TYPE_OBJECT, .key = "toggle2", .offset = offsetof(struct mgos_config, mdash.toggle2), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.toggle2.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.toggle2.title)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, mdash.toggle2.key)},
    {.type = CONF_TYPE_OBJECT, .key = "button", .offset = offsetof(struct mgos_config, mdash.button), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.button.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.button.title)},
    {.type = CONF_TYPE_STRING, .key = "method", .offset = offsetof(struct mgos_config, mdash.button.method)},
    {.type = CONF_TYPE_STRING, .key = "params", .offset = offsetof(struct mgos_config, mdash.button.params)},
    {.type = CONF_TYPE_STRING, .key = "icon", .offset = offsetof(struct mgos_config, mdash.button.icon)},
    {.type = CONF_TYPE_OBJECT, .key = "button1", .offset = offsetof(struct mgos_config, mdash.button1), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.button1.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.button1.title)},
    {.type = CONF_TYPE_STRING, .key = "method", .offset = offsetof(struct mgos_config, mdash.button1.method)},
    {.type = CONF_TYPE_STRING, .key = "params", .offset = offsetof(struct mgos_config, mdash.button1.params)},
    {.type = CONF_TYPE_STRING, .key = "icon", .offset = offsetof(struct mgos_config, mdash.button1.icon)},
    {.type = CONF_TYPE_OBJECT, .key = "button2", .offset = offsetof(struct mgos_config, mdash.button2), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mdash.button2.enable)},
    {.type = CONF_TYPE_STRING, .key = "title", .offset = offsetof(struct mgos_config, mdash.button2.title)},
    {.type = CONF_TYPE_STRING, .key = "method", .offset = offsetof(struct mgos_config, mdash.button2.method)},
    {.type = CONF_TYPE_STRING, .key = "params", .offset = offsetof(struct mgos_config, mdash.button2.params)},
    {.type = CONF_TYPE_STRING, .key = "icon", .offset = offsetof(struct mgos_config, mdash.button2.icon)},
    {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 23},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
    {.type = CONF_TYPE_BOOL, .key = "http_enable", .offset = offsetof(struct mgos_config, rpc.http_enable)},
    {.type = CONF_TYPE_BOOL, .key = "service_sys_enable", .offset = offsetof(struct mgos_config, rpc.service_sys_enable)},
    {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
    {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
    {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
    {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
    {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
    {.type = CONF_TYPE_OBJECT, .key = "uart", .offset = offsetof(struct mgos_config, rpc.uart), .num_desc = 4},
    {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
    {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
    {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
    {.type = CONF_TYPE_STRING, .key = "dst", .offset = offsetof(struct mgos_config, rpc.uart.dst)},
    {.type = CONF_TYPE_OBJECT, .key = "ws", .offset = offsetof(struct mgos_config, rpc.ws), .num_desc = 8},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.ws.enable)},
    {.type = CONF_TYPE_STRING, .key = "server_address", .offset = offsetof(struct mgos_config, rpc.ws.server_address)},
    {.type = CONF_TYPE_INT, .key = "reconnect_interval_min", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_min)},
    {.type = CONF_TYPE_INT, .key = "reconnect_interval_max", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_max)},
    {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, rpc.ws.ssl_server_name)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, rpc.ws.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, rpc.ws.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, rpc.ws.ssl_ca_cert)},
    {.type = CONF_TYPE_OBJECT, .key = "wifi", .offset = offsetof(struct mgos_config, wifi), .num_desc = 61},
    {.type = CONF_TYPE_OBJECT, .key = "ap", .offset = offsetof(struct mgos_config, wifi.ap), .num_desc = 15},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.ap.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.ap.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.ap.pass)},
    {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct mgos_config, wifi.ap.hidden)},
    {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.ap.channel)},
    {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct mgos_config, wifi.ap.max_connections)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.ap.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.ap.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.ap.gw)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_start)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_end)},
    {.type = CONF_TYPE_INT, .key = "trigger_on_gpio", .offset = offsetof(struct mgos_config, wifi.ap.trigger_on_gpio)},
    {.type = CONF_TYPE_INT, .key = "disable_after", .offset = offsetof(struct mgos_config, wifi.ap.disable_after)},
    {.type = CONF_TYPE_STRING, .key = "hostname", .offset = offsetof(struct mgos_config, wifi.ap.hostname)},
    {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, wifi.ap.keep_enabled)},
    {.type = CONF_TYPE_OBJECT, .key = "sta", .offset = offsetof(struct mgos_config, wifi.sta), .num_desc = 13},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta.pass)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta.dhcp_hostname)},
    {.type = CONF_TYPE_OBJECT, .key = "sta1", .offset = offsetof(struct mgos_config, wifi.sta1), .num_desc = 13},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta1.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta1.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta1.pass)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta1.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta1.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta1.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta1.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta1.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta1.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta1.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta1.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta1.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta1.dhcp_hostname)},
    {.type = CONF_TYPE_OBJECT, .key = "sta2", .offset = offsetof(struct mgos_config, wifi.sta2), .num_desc = 13},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta2.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta2.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta2.pass)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta2.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta2.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta2.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta2.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta2.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta2.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta2.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta2.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta2.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta2.dhcp_hostname)},
    {.type = CONF_TYPE_INT, .key = "sta_cfg_idx", .offset = offsetof(struct mgos_config, wifi.sta_cfg_idx)},
    {.type = CONF_TYPE_INT, .key = "sta_connect_timeout", .offset = offsetof(struct mgos_config, wifi.sta_connect_timeout)},
    {.type = CONF_TYPE_BOOL, .key = "sta_all_chan_scan", .offset = offsetof(struct mgos_config, wifi.sta_all_chan_scan)},
    {.type = CONF_TYPE_OBJECT, .key = "board", .offset = offsetof(struct mgos_config, board), .num_desc = 18},
    {.type = CONF_TYPE_OBJECT, .key = "led1", .offset = offsetof(struct mgos_config, board.led1), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led1.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led1.active_high)},
    {.type = CONF_TYPE_OBJECT, .key = "led2", .offset = offsetof(struct mgos_config, board.led2), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led2.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led2.active_high)},
    {.type = CONF_TYPE_OBJECT, .key = "led3", .offset = offsetof(struct mgos_config, board.led3), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led3.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led3.active_high)},
    {.type = CONF_TYPE_OBJECT, .key = "btn1", .offset = offsetof(struct mgos_config, board.btn1), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn1.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn1.pull_up)},
    {.type = CONF_TYPE_OBJECT, .key = "btn2", .offset = offsetof(struct mgos_config, board.btn2), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn2.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn2.pull_up)},
    {.type = CONF_TYPE_OBJECT, .key = "btn3", .offset = offsetof(struct mgos_config, board.btn3), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn3.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn3.pull_up)},
};

/* struct mgos_config_debug */
const struct mgos_conf_entry *mgos_config_debug_get_schema(void) {
  return &mgos_config_schema_[1];
}

void mgos_config_debug_set_defaults(struct mgos_config_debug *cfg) {
  cfg->udp_log_addr = NULL;
  cfg->udp_log_level = 3;
  cfg->mbedtls_level = 1;
  cfg->level = 2;
  cfg->file_level = NULL;
  cfg->event_level = 2;
  cfg->stdout_uart = 0;
  cfg->stderr_uart = 0;
  cfg->factory_reset_gpio = -1;
  cfg->mg_mgr_hexdump_file = NULL;
}

/* struct mgos_config_device */
const struct mgos_conf_entry *mgos_config_device_get_schema(void) {
  return &mgos_config_schema_[12];
}

void mgos_config_device_set_defaults(struct mgos_config_device *cfg) {
  cfg->id = "esp8266_??????";
  cfg->license = NULL;
  cfg->mac = NULL;
  cfg->public_key = NULL;
  cfg->sn = NULL;
}

/* struct mgos_config_sys */
const struct mgos_conf_entry *mgos_config_sys_get_schema(void) {
  return &mgos_config_schema_[18];
}

void mgos_config_sys_set_defaults(struct mgos_config_sys *cfg) {
  cfg->tz_spec = NULL;
  cfg->wdt_timeout = 30;
  cfg->pref_ota_lib = NULL;
}

/* struct mgos_config_http */
const struct mgos_conf_entry *mgos_config_http_get_schema(void) {
  return &mgos_config_schema_[23];
}

void mgos_config_http_set_defaults(struct mgos_config_http *cfg) {
  cfg->enable = true;
  cfg->listen_addr = "80";
  cfg->document_root = "/";
  cfg->index_files = NULL;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
  cfg->upload_acl = "*";
  cfg->hidden_files = NULL;
  cfg->auth_domain = NULL;
  cfg->auth_file = NULL;
  cfg->extra_headers = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = true;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value1_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value1_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value2_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value2_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value3_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value3_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value4_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value4_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value5_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value5_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value6_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value6_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value7_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value7_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value8_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value8_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_value */
const struct mgos_conf_entry *mgos_config_mdash_value9_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_mdash_value9_set_defaults(struct mgos_config_mdash_value *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input1_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input1_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input2_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input2_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input3_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input3_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input4_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input4_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input5_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input5_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input6_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input6_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input7_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input7_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input8_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input8_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_input */
const struct mgos_conf_entry *mgos_config_mdash_input9_get_schema(void) {
  return &mgos_config_schema_[115];
}

void mgos_config_mdash_input9_set_defaults(struct mgos_config_mdash_input *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_toggle */
const struct mgos_conf_entry *mgos_config_mdash_toggle_get_schema(void) {
  return &mgos_config_schema_[127];
}

void mgos_config_mdash_toggle_set_defaults(struct mgos_config_mdash_toggle *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_toggle */
const struct mgos_conf_entry *mgos_config_mdash_toggle1_get_schema(void) {
  return &mgos_config_schema_[127];
}

void mgos_config_mdash_toggle1_set_defaults(struct mgos_config_mdash_toggle *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_toggle */
const struct mgos_conf_entry *mgos_config_mdash_toggle2_get_schema(void) {
  return &mgos_config_schema_[127];
}

void mgos_config_mdash_toggle2_set_defaults(struct mgos_config_mdash_toggle *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->key = NULL;
}

/* struct mgos_config_mdash_button */
const struct mgos_conf_entry *mgos_config_mdash_button_get_schema(void) {
  return &mgos_config_schema_[143];
}

void mgos_config_mdash_button_set_defaults(struct mgos_config_mdash_button *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->method = NULL;
  cfg->params = NULL;
  cfg->icon = NULL;
}

/* struct mgos_config_mdash_button */
const struct mgos_conf_entry *mgos_config_mdash_button1_get_schema(void) {
  return &mgos_config_schema_[143];
}

void mgos_config_mdash_button1_set_defaults(struct mgos_config_mdash_button *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->method = NULL;
  cfg->params = NULL;
  cfg->icon = NULL;
}

/* struct mgos_config_mdash_button */
const struct mgos_conf_entry *mgos_config_mdash_button2_get_schema(void) {
  return &mgos_config_schema_[143];
}

void mgos_config_mdash_button2_set_defaults(struct mgos_config_mdash_button *cfg) {
  cfg->enable = false;
  cfg->title = NULL;
  cfg->method = NULL;
  cfg->params = NULL;
  cfg->icon = NULL;
}

/* struct mgos_config_mdash */
const struct mgos_conf_entry *mgos_config_mdash_get_schema(void) {
  return &mgos_config_schema_[36];
}

void mgos_config_mdash_set_defaults(struct mgos_config_mdash *cfg) {
  cfg->device_id = NULL;
  cfg->api_key = NULL;
  mgos_config_mdash_value_set_defaults(&cfg->value);
  mgos_config_mdash_value1_set_defaults(&cfg->value1);
  mgos_config_mdash_value2_set_defaults(&cfg->value2);
  mgos_config_mdash_value3_set_defaults(&cfg->value3);
  mgos_config_mdash_value4_set_defaults(&cfg->value4);
  mgos_config_mdash_value5_set_defaults(&cfg->value5);
  mgos_config_mdash_value6_set_defaults(&cfg->value6);
  mgos_config_mdash_value7_set_defaults(&cfg->value7);
  mgos_config_mdash_value8_set_defaults(&cfg->value8);
  mgos_config_mdash_value9_set_defaults(&cfg->value9);
  mgos_config_mdash_input_set_defaults(&cfg->input);
  mgos_config_mdash_input1_set_defaults(&cfg->input1);
  mgos_config_mdash_input2_set_defaults(&cfg->input2);
  mgos_config_mdash_input3_set_defaults(&cfg->input3);
  mgos_config_mdash_input4_set_defaults(&cfg->input4);
  mgos_config_mdash_input5_set_defaults(&cfg->input5);
  mgos_config_mdash_input6_set_defaults(&cfg->input6);
  mgos_config_mdash_input7_set_defaults(&cfg->input7);
  mgos_config_mdash_input8_set_defaults(&cfg->input8);
  mgos_config_mdash_input9_set_defaults(&cfg->input9);
  mgos_config_mdash_toggle_set_defaults(&cfg->toggle);
  mgos_config_mdash_toggle1_set_defaults(&cfg->toggle1);
  mgos_config_mdash_toggle2_set_defaults(&cfg->toggle2);
  mgos_config_mdash_button_set_defaults(&cfg->button);
  mgos_config_mdash_button1_set_defaults(&cfg->button1);
  mgos_config_mdash_button2_set_defaults(&cfg->button2);
}

/* struct mgos_config_rpc_uart */
const struct mgos_conf_entry *mgos_config_rpc_uart_get_schema(void) {
  return &mgos_config_schema_[159];
}

void mgos_config_rpc_uart_set_defaults(struct mgos_config_rpc_uart *cfg) {
  cfg->uart_no = 0;
  cfg->baud_rate = 115200;
  cfg->fc_type = 2;
  cfg->dst = NULL;
}

/* struct mgos_config_rpc_ws */
const struct mgos_conf_entry *mgos_config_rpc_ws_get_schema(void) {
  return &mgos_config_schema_[164];
}

void mgos_config_rpc_ws_set_defaults(struct mgos_config_rpc_ws *cfg) {
  cfg->enable = true;
  cfg->server_address = NULL;
  cfg->reconnect_interval_min = 1;
  cfg->reconnect_interval_max = 60;
  cfg->ssl_server_name = NULL;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
}

/* struct mgos_config_rpc */
const struct mgos_conf_entry *mgos_config_rpc_get_schema(void) {
  return &mgos_config_schema_[149];
}

void mgos_config_rpc_set_defaults(struct mgos_config_rpc *cfg) {
  cfg->enable = true;
  cfg->http_enable = true;
  cfg->service_sys_enable = true;
  cfg->max_frame_size = 4096;
  cfg->max_queue_length = 25;
  cfg->default_out_channel_idle_close_timeout = 10;
  cfg->acl_file = NULL;
  cfg->auth_domain = "RPC";
  cfg->auth_file = NULL;
  mgos_config_rpc_uart_set_defaults(&cfg->uart);
  mgos_config_rpc_ws_set_defaults(&cfg->ws);
}

/* struct mgos_config_wifi_ap */
const struct mgos_conf_entry *mgos_config_wifi_ap_get_schema(void) {
  return &mgos_config_schema_[174];
}

void mgos_config_wifi_ap_set_defaults(struct mgos_config_wifi_ap *cfg) {
  cfg->enable = true;
  cfg->ssid = "PanelErgonomia_??????";
  cfg->pass = "smartindustry";
  cfg->hidden = false;
  cfg->channel = 6;
  cfg->max_connections = 10;
  cfg->ip = "192.168.10.1";
  cfg->netmask = "255.255.255.0";
  cfg->gw = "192.168.10.1";
  cfg->dhcp_start = "192.168.10.2";
  cfg->dhcp_end = "192.168.10.100";
  cfg->trigger_on_gpio = -1;
  cfg->disable_after = 0;
  cfg->hostname = NULL;
  cfg->keep_enabled = true;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta_get_schema(void) {
  return &mgos_config_schema_[218];
}

void mgos_config_wifi_sta_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = true;
  cfg->ssid = "Inventoteca_2G";
  cfg->pass = "science_7425";
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta1_get_schema(void) {
  return &mgos_config_schema_[218];
}

void mgos_config_wifi_sta1_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = "Inventoteca_2G";
  cfg->pass = "science_7425";
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta2_get_schema(void) {
  return &mgos_config_schema_[218];
}

void mgos_config_wifi_sta2_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = "Inventoteca_2G";
  cfg->pass = "science_7425";
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
}

/* struct mgos_config_wifi */
const struct mgos_conf_entry *mgos_config_wifi_get_schema(void) {
  return &mgos_config_schema_[173];
}

void mgos_config_wifi_set_defaults(struct mgos_config_wifi *cfg) {
  mgos_config_wifi_ap_set_defaults(&cfg->ap);
  mgos_config_wifi_sta_set_defaults(&cfg->sta);
  mgos_config_wifi_sta1_set_defaults(&cfg->sta1);
  mgos_config_wifi_sta2_set_defaults(&cfg->sta2);
  cfg->sta_cfg_idx = 0;
  cfg->sta_connect_timeout = 30;
  cfg->sta_all_chan_scan = true;
}

/* struct mgos_config_board_led1 */
const struct mgos_conf_entry *mgos_config_board_led1_get_schema(void) {
  return &mgos_config_schema_[236];
}

void mgos_config_board_led1_set_defaults(struct mgos_config_board_led1 *cfg) {
  cfg->pin = 2;
  cfg->active_high = false;
}

/* struct mgos_config_board_led2 */
const struct mgos_conf_entry *mgos_config_board_led2_get_schema(void) {
  return &mgos_config_schema_[239];
}

void mgos_config_board_led2_set_defaults(struct mgos_config_board_led2 *cfg) {
  cfg->pin = -1;
  cfg->active_high = true;
}

/* struct mgos_config_board_led3 */
const struct mgos_conf_entry *mgos_config_board_led3_get_schema(void) {
  return &mgos_config_schema_[242];
}

void mgos_config_board_led3_set_defaults(struct mgos_config_board_led3 *cfg) {
  cfg->pin = -1;
  cfg->active_high = true;
}

/* struct mgos_config_board_btn1 */
const struct mgos_conf_entry *mgos_config_board_btn1_get_schema(void) {
  return &mgos_config_schema_[245];
}

void mgos_config_board_btn1_set_defaults(struct mgos_config_board_btn1 *cfg) {
  cfg->pin = 0;
  cfg->pull_up = true;
}

/* struct mgos_config_board_btn2 */
const struct mgos_conf_entry *mgos_config_board_btn2_get_schema(void) {
  return &mgos_config_schema_[248];
}

void mgos_config_board_btn2_set_defaults(struct mgos_config_board_btn2 *cfg) {
  cfg->pin = -1;
  cfg->pull_up = false;
}

/* struct mgos_config_board_btn3 */
const struct mgos_conf_entry *mgos_config_board_btn3_get_schema(void) {
  return &mgos_config_schema_[251];
}

void mgos_config_board_btn3_set_defaults(struct mgos_config_board_btn3 *cfg) {
  cfg->pin = -1;
  cfg->pull_up = false;
}

/* struct mgos_config_board */
const struct mgos_conf_entry *mgos_config_board_get_schema(void) {
  return &mgos_config_schema_[235];
}

void mgos_config_board_set_defaults(struct mgos_config_board *cfg) {
  mgos_config_board_led1_set_defaults(&cfg->led1);
  mgos_config_board_led2_set_defaults(&cfg->led2);
  mgos_config_board_led3_set_defaults(&cfg->led3);
  mgos_config_board_btn1_set_defaults(&cfg->btn1);
  mgos_config_board_btn2_set_defaults(&cfg->btn2);
  mgos_config_board_btn3_set_defaults(&cfg->btn3);
}

/* struct mgos_config */
const struct mgos_conf_entry *mgos_config_get_schema(void) {
  return &mgos_config_schema_[0];
}

void mgos_config_set_defaults(struct mgos_config *cfg) {
  mgos_config_debug_set_defaults(&cfg->debug);
  mgos_config_device_set_defaults(&cfg->device);
  mgos_config_sys_set_defaults(&cfg->sys);
  cfg->conf_acl = "*";
  mgos_config_http_set_defaults(&cfg->http);
  mgos_config_mdash_set_defaults(&cfg->mdash);
  mgos_config_rpc_set_defaults(&cfg->rpc);
  mgos_config_wifi_set_defaults(&cfg->wifi);
  mgos_config_board_set_defaults(&cfg->board);
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Accessors */

/* debug */
const struct mgos_config_debug *mgos_config_get_debug(const struct mgos_config *cfg) { return &cfg->debug; }

/* debug.udp_log_addr */
const char * mgos_config_get_debug_udp_log_addr(const struct mgos_config *cfg) { return cfg->debug.udp_log_addr; }
const char * mgos_config_get_default_debug_udp_log_addr(void) { return NULL; }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.udp_log_addr, v); }

/* debug.udp_log_level */
int mgos_config_get_debug_udp_log_level(const struct mgos_config *cfg) { return cfg->debug.udp_log_level; }
int mgos_config_get_default_debug_udp_log_level(void) { return 3; }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v) { cfg->debug.udp_log_level = v; }

/* debug.mbedtls_level */
int mgos_config_get_debug_mbedtls_level(const struct mgos_config *cfg) { return cfg->debug.mbedtls_level; }
int mgos_config_get_default_debug_mbedtls_level(void) { return 1; }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v) { cfg->debug.mbedtls_level = v; }

/* debug.level */
int mgos_config_get_debug_level(const struct mgos_config *cfg) { return cfg->debug.level; }
int mgos_config_get_default_debug_level(void) { return 2; }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v) { cfg->debug.level = v; }

/* debug.file_level */
const char * mgos_config_get_debug_file_level(const struct mgos_config *cfg) { return cfg->debug.file_level; }
const char * mgos_config_get_default_debug_file_level(void) { return NULL; }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.file_level, v); }

/* debug.event_level */
int mgos_config_get_debug_event_level(const struct mgos_config *cfg) { return cfg->debug.event_level; }
int mgos_config_get_default_debug_event_level(void) { return 2; }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v) { cfg->debug.event_level = v; }

/* debug.stdout_uart */
int mgos_config_get_debug_stdout_uart(const struct mgos_config *cfg) { return cfg->debug.stdout_uart; }
int mgos_config_get_default_debug_stdout_uart(void) { return 0; }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v) { cfg->debug.stdout_uart = v; }

/* debug.stderr_uart */
int mgos_config_get_debug_stderr_uart(const struct mgos_config *cfg) { return cfg->debug.stderr_uart; }
int mgos_config_get_default_debug_stderr_uart(void) { return 0; }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v) { cfg->debug.stderr_uart = v; }

/* debug.factory_reset_gpio */
int mgos_config_get_debug_factory_reset_gpio(const struct mgos_config *cfg) { return cfg->debug.factory_reset_gpio; }
int mgos_config_get_default_debug_factory_reset_gpio(void) { return -1; }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v) { cfg->debug.factory_reset_gpio = v; }

/* debug.mg_mgr_hexdump_file */
const char * mgos_config_get_debug_mg_mgr_hexdump_file(const struct mgos_config *cfg) { return cfg->debug.mg_mgr_hexdump_file; }
const char * mgos_config_get_default_debug_mg_mgr_hexdump_file(void) { return NULL; }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, v); }

/* device */
const struct mgos_config_device *mgos_config_get_device(const struct mgos_config *cfg) { return &cfg->device; }

/* device.id */
const char * mgos_config_get_device_id(const struct mgos_config *cfg) { return cfg->device.id; }
const char * mgos_config_get_default_device_id(void) { return "esp8266_??????"; }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.id, v); }

/* device.license */
const char * mgos_config_get_device_license(const struct mgos_config *cfg) { return cfg->device.license; }
const char * mgos_config_get_default_device_license(void) { return NULL; }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.license, v); }

/* device.mac */
const char * mgos_config_get_device_mac(const struct mgos_config *cfg) { return cfg->device.mac; }
const char * mgos_config_get_default_device_mac(void) { return NULL; }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.mac, v); }

/* device.public_key */
const char * mgos_config_get_device_public_key(const struct mgos_config *cfg) { return cfg->device.public_key; }
const char * mgos_config_get_default_device_public_key(void) { return NULL; }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.public_key, v); }

/* device.sn */
const char * mgos_config_get_device_sn(const struct mgos_config *cfg) { return cfg->device.sn; }
const char * mgos_config_get_default_device_sn(void) { return NULL; }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.sn, v); }

/* sys */
const struct mgos_config_sys *mgos_config_get_sys(const struct mgos_config *cfg) { return &cfg->sys; }

/* sys.tz_spec */
const char * mgos_config_get_sys_tz_spec(const struct mgos_config *cfg) { return cfg->sys.tz_spec; }
const char * mgos_config_get_default_sys_tz_spec(void) { return NULL; }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.tz_spec, v); }

/* sys.wdt_timeout */
int mgos_config_get_sys_wdt_timeout(const struct mgos_config *cfg) { return cfg->sys.wdt_timeout; }
int mgos_config_get_default_sys_wdt_timeout(void) { return 30; }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v) { cfg->sys.wdt_timeout = v; }

/* sys.pref_ota_lib */
const char * mgos_config_get_sys_pref_ota_lib(const struct mgos_config *cfg) { return cfg->sys.pref_ota_lib; }
const char * mgos_config_get_default_sys_pref_ota_lib(void) { return NULL; }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.pref_ota_lib, v); }

/* conf_acl */
const char * mgos_config_get_conf_acl(const struct mgos_config *cfg) { return cfg->conf_acl; }
const char * mgos_config_get_default_conf_acl(void) { return "*"; }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->conf_acl, v); }

/* http */
const struct mgos_config_http *mgos_config_get_http(const struct mgos_config *cfg) { return &cfg->http; }

/* http.enable */
int mgos_config_get_http_enable(const struct mgos_config *cfg) { return cfg->http.enable; }
int mgos_config_get_default_http_enable(void) { return true; }
void mgos_config_set_http_enable(struct mgos_config *cfg, int v) { cfg->http.enable = v; }

/* http.listen_addr */
const char * mgos_config_get_http_listen_addr(const struct mgos_config *cfg) { return cfg->http.listen_addr; }
const char * mgos_config_get_default_http_listen_addr(void) { return "80"; }
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.listen_addr, v); }

/* http.document_root */
const char * mgos_config_get_http_document_root(const struct mgos_config *cfg) { return cfg->http.document_root; }
const char * mgos_config_get_default_http_document_root(void) { return "/"; }
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.document_root, v); }

/* http.index_files */
const char * mgos_config_get_http_index_files(const struct mgos_config *cfg) { return cfg->http.index_files; }
const char * mgos_config_get_default_http_index_files(void) { return NULL; }
void mgos_config_set_http_index_files(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.index_files, v); }

/* http.ssl_cert */
const char * mgos_config_get_http_ssl_cert(const struct mgos_config *cfg) { return cfg->http.ssl_cert; }
const char * mgos_config_get_default_http_ssl_cert(void) { return NULL; }
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.ssl_cert, v); }

/* http.ssl_key */
const char * mgos_config_get_http_ssl_key(const struct mgos_config *cfg) { return cfg->http.ssl_key; }
const char * mgos_config_get_default_http_ssl_key(void) { return NULL; }
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.ssl_key, v); }

/* http.ssl_ca_cert */
const char * mgos_config_get_http_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->http.ssl_ca_cert; }
const char * mgos_config_get_default_http_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.ssl_ca_cert, v); }

/* http.upload_acl */
const char * mgos_config_get_http_upload_acl(const struct mgos_config *cfg) { return cfg->http.upload_acl; }
const char * mgos_config_get_default_http_upload_acl(void) { return "*"; }
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.upload_acl, v); }

/* http.hidden_files */
const char * mgos_config_get_http_hidden_files(const struct mgos_config *cfg) { return cfg->http.hidden_files; }
const char * mgos_config_get_default_http_hidden_files(void) { return NULL; }
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.hidden_files, v); }

/* http.auth_domain */
const char * mgos_config_get_http_auth_domain(const struct mgos_config *cfg) { return cfg->http.auth_domain; }
const char * mgos_config_get_default_http_auth_domain(void) { return NULL; }
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.auth_domain, v); }

/* http.auth_file */
const char * mgos_config_get_http_auth_file(const struct mgos_config *cfg) { return cfg->http.auth_file; }
const char * mgos_config_get_default_http_auth_file(void) { return NULL; }
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.auth_file, v); }

/* http.extra_headers */
const char * mgos_config_get_http_extra_headers(const struct mgos_config *cfg) { return cfg->http.extra_headers; }
const char * mgos_config_get_default_http_extra_headers(void) { return NULL; }
void mgos_config_set_http_extra_headers(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.extra_headers, v); }

/* mdash */
const struct mgos_config_mdash *mgos_config_get_mdash(const struct mgos_config *cfg) { return &cfg->mdash; }

/* mdash.device_id */
const char * mgos_config_get_mdash_device_id(const struct mgos_config *cfg) { return cfg->mdash.device_id; }
const char * mgos_config_get_default_mdash_device_id(void) { return NULL; }
void mgos_config_set_mdash_device_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.device_id, v); }

/* mdash.api_key */
const char * mgos_config_get_mdash_api_key(const struct mgos_config *cfg) { return cfg->mdash.api_key; }
const char * mgos_config_get_default_mdash_api_key(void) { return NULL; }
void mgos_config_set_mdash_api_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.api_key, v); }

/* mdash.value */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value(const struct mgos_config *cfg) { return &cfg->mdash.value; }

/* mdash.value.enable */
int mgos_config_get_mdash_value_enable(const struct mgos_config *cfg) { return cfg->mdash.value.enable; }
int mgos_config_get_default_mdash_value_enable(void) { return true; }
void mgos_config_set_mdash_value_enable(struct mgos_config *cfg, int v) { cfg->mdash.value.enable = v; }

/* mdash.value.title */
const char * mgos_config_get_mdash_value_title(const struct mgos_config *cfg) { return cfg->mdash.value.title; }
const char * mgos_config_get_default_mdash_value_title(void) { return NULL; }
void mgos_config_set_mdash_value_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value.title, v); }

/* mdash.value.key */
const char * mgos_config_get_mdash_value_key(const struct mgos_config *cfg) { return cfg->mdash.value.key; }
const char * mgos_config_get_default_mdash_value_key(void) { return NULL; }
void mgos_config_set_mdash_value_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value.key, v); }

/* mdash.value1 */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value1(const struct mgos_config *cfg) { return &cfg->mdash.value1; }

/* mdash.value1.enable */
int mgos_config_get_mdash_value1_enable(const struct mgos_config *cfg) { return cfg->mdash.value1.enable; }
int mgos_config_get_default_mdash_value1_enable(void) { return false; }
void mgos_config_set_mdash_value1_enable(struct mgos_config *cfg, int v) { cfg->mdash.value1.enable = v; }

/* mdash.value1.title */
const char * mgos_config_get_mdash_value1_title(const struct mgos_config *cfg) { return cfg->mdash.value1.title; }
const char * mgos_config_get_default_mdash_value1_title(void) { return NULL; }
void mgos_config_set_mdash_value1_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value1.title, v); }

/* mdash.value1.key */
const char * mgos_config_get_mdash_value1_key(const struct mgos_config *cfg) { return cfg->mdash.value1.key; }
const char * mgos_config_get_default_mdash_value1_key(void) { return NULL; }
void mgos_config_set_mdash_value1_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value1.key, v); }

/* mdash.value2 */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value2(const struct mgos_config *cfg) { return &cfg->mdash.value2; }

/* mdash.value2.enable */
int mgos_config_get_mdash_value2_enable(const struct mgos_config *cfg) { return cfg->mdash.value2.enable; }
int mgos_config_get_default_mdash_value2_enable(void) { return false; }
void mgos_config_set_mdash_value2_enable(struct mgos_config *cfg, int v) { cfg->mdash.value2.enable = v; }

/* mdash.value2.title */
const char * mgos_config_get_mdash_value2_title(const struct mgos_config *cfg) { return cfg->mdash.value2.title; }
const char * mgos_config_get_default_mdash_value2_title(void) { return NULL; }
void mgos_config_set_mdash_value2_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value2.title, v); }

/* mdash.value2.key */
const char * mgos_config_get_mdash_value2_key(const struct mgos_config *cfg) { return cfg->mdash.value2.key; }
const char * mgos_config_get_default_mdash_value2_key(void) { return NULL; }
void mgos_config_set_mdash_value2_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value2.key, v); }

/* mdash.value3 */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value3(const struct mgos_config *cfg) { return &cfg->mdash.value3; }

/* mdash.value3.enable */
int mgos_config_get_mdash_value3_enable(const struct mgos_config *cfg) { return cfg->mdash.value3.enable; }
int mgos_config_get_default_mdash_value3_enable(void) { return false; }
void mgos_config_set_mdash_value3_enable(struct mgos_config *cfg, int v) { cfg->mdash.value3.enable = v; }

/* mdash.value3.title */
const char * mgos_config_get_mdash_value3_title(const struct mgos_config *cfg) { return cfg->mdash.value3.title; }
const char * mgos_config_get_default_mdash_value3_title(void) { return NULL; }
void mgos_config_set_mdash_value3_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value3.title, v); }

/* mdash.value3.key */
const char * mgos_config_get_mdash_value3_key(const struct mgos_config *cfg) { return cfg->mdash.value3.key; }
const char * mgos_config_get_default_mdash_value3_key(void) { return NULL; }
void mgos_config_set_mdash_value3_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value3.key, v); }

/* mdash.value4 */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value4(const struct mgos_config *cfg) { return &cfg->mdash.value4; }

/* mdash.value4.enable */
int mgos_config_get_mdash_value4_enable(const struct mgos_config *cfg) { return cfg->mdash.value4.enable; }
int mgos_config_get_default_mdash_value4_enable(void) { return false; }
void mgos_config_set_mdash_value4_enable(struct mgos_config *cfg, int v) { cfg->mdash.value4.enable = v; }

/* mdash.value4.title */
const char * mgos_config_get_mdash_value4_title(const struct mgos_config *cfg) { return cfg->mdash.value4.title; }
const char * mgos_config_get_default_mdash_value4_title(void) { return NULL; }
void mgos_config_set_mdash_value4_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value4.title, v); }

/* mdash.value4.key */
const char * mgos_config_get_mdash_value4_key(const struct mgos_config *cfg) { return cfg->mdash.value4.key; }
const char * mgos_config_get_default_mdash_value4_key(void) { return NULL; }
void mgos_config_set_mdash_value4_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value4.key, v); }

/* mdash.value5 */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value5(const struct mgos_config *cfg) { return &cfg->mdash.value5; }

/* mdash.value5.enable */
int mgos_config_get_mdash_value5_enable(const struct mgos_config *cfg) { return cfg->mdash.value5.enable; }
int mgos_config_get_default_mdash_value5_enable(void) { return false; }
void mgos_config_set_mdash_value5_enable(struct mgos_config *cfg, int v) { cfg->mdash.value5.enable = v; }

/* mdash.value5.title */
const char * mgos_config_get_mdash_value5_title(const struct mgos_config *cfg) { return cfg->mdash.value5.title; }
const char * mgos_config_get_default_mdash_value5_title(void) { return NULL; }
void mgos_config_set_mdash_value5_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value5.title, v); }

/* mdash.value5.key */
const char * mgos_config_get_mdash_value5_key(const struct mgos_config *cfg) { return cfg->mdash.value5.key; }
const char * mgos_config_get_default_mdash_value5_key(void) { return NULL; }
void mgos_config_set_mdash_value5_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value5.key, v); }

/* mdash.value6 */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value6(const struct mgos_config *cfg) { return &cfg->mdash.value6; }

/* mdash.value6.enable */
int mgos_config_get_mdash_value6_enable(const struct mgos_config *cfg) { return cfg->mdash.value6.enable; }
int mgos_config_get_default_mdash_value6_enable(void) { return false; }
void mgos_config_set_mdash_value6_enable(struct mgos_config *cfg, int v) { cfg->mdash.value6.enable = v; }

/* mdash.value6.title */
const char * mgos_config_get_mdash_value6_title(const struct mgos_config *cfg) { return cfg->mdash.value6.title; }
const char * mgos_config_get_default_mdash_value6_title(void) { return NULL; }
void mgos_config_set_mdash_value6_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value6.title, v); }

/* mdash.value6.key */
const char * mgos_config_get_mdash_value6_key(const struct mgos_config *cfg) { return cfg->mdash.value6.key; }
const char * mgos_config_get_default_mdash_value6_key(void) { return NULL; }
void mgos_config_set_mdash_value6_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value6.key, v); }

/* mdash.value7 */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value7(const struct mgos_config *cfg) { return &cfg->mdash.value7; }

/* mdash.value7.enable */
int mgos_config_get_mdash_value7_enable(const struct mgos_config *cfg) { return cfg->mdash.value7.enable; }
int mgos_config_get_default_mdash_value7_enable(void) { return false; }
void mgos_config_set_mdash_value7_enable(struct mgos_config *cfg, int v) { cfg->mdash.value7.enable = v; }

/* mdash.value7.title */
const char * mgos_config_get_mdash_value7_title(const struct mgos_config *cfg) { return cfg->mdash.value7.title; }
const char * mgos_config_get_default_mdash_value7_title(void) { return NULL; }
void mgos_config_set_mdash_value7_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value7.title, v); }

/* mdash.value7.key */
const char * mgos_config_get_mdash_value7_key(const struct mgos_config *cfg) { return cfg->mdash.value7.key; }
const char * mgos_config_get_default_mdash_value7_key(void) { return NULL; }
void mgos_config_set_mdash_value7_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value7.key, v); }

/* mdash.value8 */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value8(const struct mgos_config *cfg) { return &cfg->mdash.value8; }

/* mdash.value8.enable */
int mgos_config_get_mdash_value8_enable(const struct mgos_config *cfg) { return cfg->mdash.value8.enable; }
int mgos_config_get_default_mdash_value8_enable(void) { return false; }
void mgos_config_set_mdash_value8_enable(struct mgos_config *cfg, int v) { cfg->mdash.value8.enable = v; }

/* mdash.value8.title */
const char * mgos_config_get_mdash_value8_title(const struct mgos_config *cfg) { return cfg->mdash.value8.title; }
const char * mgos_config_get_default_mdash_value8_title(void) { return NULL; }
void mgos_config_set_mdash_value8_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value8.title, v); }

/* mdash.value8.key */
const char * mgos_config_get_mdash_value8_key(const struct mgos_config *cfg) { return cfg->mdash.value8.key; }
const char * mgos_config_get_default_mdash_value8_key(void) { return NULL; }
void mgos_config_set_mdash_value8_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value8.key, v); }

/* mdash.value9 */
const struct mgos_config_mdash_value *mgos_config_get_mdash_value9(const struct mgos_config *cfg) { return &cfg->mdash.value9; }

/* mdash.value9.enable */
int mgos_config_get_mdash_value9_enable(const struct mgos_config *cfg) { return cfg->mdash.value9.enable; }
int mgos_config_get_default_mdash_value9_enable(void) { return false; }
void mgos_config_set_mdash_value9_enable(struct mgos_config *cfg, int v) { cfg->mdash.value9.enable = v; }

/* mdash.value9.title */
const char * mgos_config_get_mdash_value9_title(const struct mgos_config *cfg) { return cfg->mdash.value9.title; }
const char * mgos_config_get_default_mdash_value9_title(void) { return NULL; }
void mgos_config_set_mdash_value9_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value9.title, v); }

/* mdash.value9.key */
const char * mgos_config_get_mdash_value9_key(const struct mgos_config *cfg) { return cfg->mdash.value9.key; }
const char * mgos_config_get_default_mdash_value9_key(void) { return NULL; }
void mgos_config_set_mdash_value9_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.value9.key, v); }

/* mdash.input */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input(const struct mgos_config *cfg) { return &cfg->mdash.input; }

/* mdash.input.enable */
int mgos_config_get_mdash_input_enable(const struct mgos_config *cfg) { return cfg->mdash.input.enable; }
int mgos_config_get_default_mdash_input_enable(void) { return false; }
void mgos_config_set_mdash_input_enable(struct mgos_config *cfg, int v) { cfg->mdash.input.enable = v; }

/* mdash.input.title */
const char * mgos_config_get_mdash_input_title(const struct mgos_config *cfg) { return cfg->mdash.input.title; }
const char * mgos_config_get_default_mdash_input_title(void) { return NULL; }
void mgos_config_set_mdash_input_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input.title, v); }

/* mdash.input.key */
const char * mgos_config_get_mdash_input_key(const struct mgos_config *cfg) { return cfg->mdash.input.key; }
const char * mgos_config_get_default_mdash_input_key(void) { return NULL; }
void mgos_config_set_mdash_input_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input.key, v); }

/* mdash.input1 */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input1(const struct mgos_config *cfg) { return &cfg->mdash.input1; }

/* mdash.input1.enable */
int mgos_config_get_mdash_input1_enable(const struct mgos_config *cfg) { return cfg->mdash.input1.enable; }
int mgos_config_get_default_mdash_input1_enable(void) { return false; }
void mgos_config_set_mdash_input1_enable(struct mgos_config *cfg, int v) { cfg->mdash.input1.enable = v; }

/* mdash.input1.title */
const char * mgos_config_get_mdash_input1_title(const struct mgos_config *cfg) { return cfg->mdash.input1.title; }
const char * mgos_config_get_default_mdash_input1_title(void) { return NULL; }
void mgos_config_set_mdash_input1_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input1.title, v); }

/* mdash.input1.key */
const char * mgos_config_get_mdash_input1_key(const struct mgos_config *cfg) { return cfg->mdash.input1.key; }
const char * mgos_config_get_default_mdash_input1_key(void) { return NULL; }
void mgos_config_set_mdash_input1_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input1.key, v); }

/* mdash.input2 */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input2(const struct mgos_config *cfg) { return &cfg->mdash.input2; }

/* mdash.input2.enable */
int mgos_config_get_mdash_input2_enable(const struct mgos_config *cfg) { return cfg->mdash.input2.enable; }
int mgos_config_get_default_mdash_input2_enable(void) { return false; }
void mgos_config_set_mdash_input2_enable(struct mgos_config *cfg, int v) { cfg->mdash.input2.enable = v; }

/* mdash.input2.title */
const char * mgos_config_get_mdash_input2_title(const struct mgos_config *cfg) { return cfg->mdash.input2.title; }
const char * mgos_config_get_default_mdash_input2_title(void) { return NULL; }
void mgos_config_set_mdash_input2_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input2.title, v); }

/* mdash.input2.key */
const char * mgos_config_get_mdash_input2_key(const struct mgos_config *cfg) { return cfg->mdash.input2.key; }
const char * mgos_config_get_default_mdash_input2_key(void) { return NULL; }
void mgos_config_set_mdash_input2_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input2.key, v); }

/* mdash.input3 */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input3(const struct mgos_config *cfg) { return &cfg->mdash.input3; }

/* mdash.input3.enable */
int mgos_config_get_mdash_input3_enable(const struct mgos_config *cfg) { return cfg->mdash.input3.enable; }
int mgos_config_get_default_mdash_input3_enable(void) { return false; }
void mgos_config_set_mdash_input3_enable(struct mgos_config *cfg, int v) { cfg->mdash.input3.enable = v; }

/* mdash.input3.title */
const char * mgos_config_get_mdash_input3_title(const struct mgos_config *cfg) { return cfg->mdash.input3.title; }
const char * mgos_config_get_default_mdash_input3_title(void) { return NULL; }
void mgos_config_set_mdash_input3_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input3.title, v); }

/* mdash.input3.key */
const char * mgos_config_get_mdash_input3_key(const struct mgos_config *cfg) { return cfg->mdash.input3.key; }
const char * mgos_config_get_default_mdash_input3_key(void) { return NULL; }
void mgos_config_set_mdash_input3_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input3.key, v); }

/* mdash.input4 */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input4(const struct mgos_config *cfg) { return &cfg->mdash.input4; }

/* mdash.input4.enable */
int mgos_config_get_mdash_input4_enable(const struct mgos_config *cfg) { return cfg->mdash.input4.enable; }
int mgos_config_get_default_mdash_input4_enable(void) { return false; }
void mgos_config_set_mdash_input4_enable(struct mgos_config *cfg, int v) { cfg->mdash.input4.enable = v; }

/* mdash.input4.title */
const char * mgos_config_get_mdash_input4_title(const struct mgos_config *cfg) { return cfg->mdash.input4.title; }
const char * mgos_config_get_default_mdash_input4_title(void) { return NULL; }
void mgos_config_set_mdash_input4_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input4.title, v); }

/* mdash.input4.key */
const char * mgos_config_get_mdash_input4_key(const struct mgos_config *cfg) { return cfg->mdash.input4.key; }
const char * mgos_config_get_default_mdash_input4_key(void) { return NULL; }
void mgos_config_set_mdash_input4_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input4.key, v); }

/* mdash.input5 */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input5(const struct mgos_config *cfg) { return &cfg->mdash.input5; }

/* mdash.input5.enable */
int mgos_config_get_mdash_input5_enable(const struct mgos_config *cfg) { return cfg->mdash.input5.enable; }
int mgos_config_get_default_mdash_input5_enable(void) { return false; }
void mgos_config_set_mdash_input5_enable(struct mgos_config *cfg, int v) { cfg->mdash.input5.enable = v; }

/* mdash.input5.title */
const char * mgos_config_get_mdash_input5_title(const struct mgos_config *cfg) { return cfg->mdash.input5.title; }
const char * mgos_config_get_default_mdash_input5_title(void) { return NULL; }
void mgos_config_set_mdash_input5_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input5.title, v); }

/* mdash.input5.key */
const char * mgos_config_get_mdash_input5_key(const struct mgos_config *cfg) { return cfg->mdash.input5.key; }
const char * mgos_config_get_default_mdash_input5_key(void) { return NULL; }
void mgos_config_set_mdash_input5_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input5.key, v); }

/* mdash.input6 */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input6(const struct mgos_config *cfg) { return &cfg->mdash.input6; }

/* mdash.input6.enable */
int mgos_config_get_mdash_input6_enable(const struct mgos_config *cfg) { return cfg->mdash.input6.enable; }
int mgos_config_get_default_mdash_input6_enable(void) { return false; }
void mgos_config_set_mdash_input6_enable(struct mgos_config *cfg, int v) { cfg->mdash.input6.enable = v; }

/* mdash.input6.title */
const char * mgos_config_get_mdash_input6_title(const struct mgos_config *cfg) { return cfg->mdash.input6.title; }
const char * mgos_config_get_default_mdash_input6_title(void) { return NULL; }
void mgos_config_set_mdash_input6_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input6.title, v); }

/* mdash.input6.key */
const char * mgos_config_get_mdash_input6_key(const struct mgos_config *cfg) { return cfg->mdash.input6.key; }
const char * mgos_config_get_default_mdash_input6_key(void) { return NULL; }
void mgos_config_set_mdash_input6_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input6.key, v); }

/* mdash.input7 */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input7(const struct mgos_config *cfg) { return &cfg->mdash.input7; }

/* mdash.input7.enable */
int mgos_config_get_mdash_input7_enable(const struct mgos_config *cfg) { return cfg->mdash.input7.enable; }
int mgos_config_get_default_mdash_input7_enable(void) { return false; }
void mgos_config_set_mdash_input7_enable(struct mgos_config *cfg, int v) { cfg->mdash.input7.enable = v; }

/* mdash.input7.title */
const char * mgos_config_get_mdash_input7_title(const struct mgos_config *cfg) { return cfg->mdash.input7.title; }
const char * mgos_config_get_default_mdash_input7_title(void) { return NULL; }
void mgos_config_set_mdash_input7_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input7.title, v); }

/* mdash.input7.key */
const char * mgos_config_get_mdash_input7_key(const struct mgos_config *cfg) { return cfg->mdash.input7.key; }
const char * mgos_config_get_default_mdash_input7_key(void) { return NULL; }
void mgos_config_set_mdash_input7_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input7.key, v); }

/* mdash.input8 */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input8(const struct mgos_config *cfg) { return &cfg->mdash.input8; }

/* mdash.input8.enable */
int mgos_config_get_mdash_input8_enable(const struct mgos_config *cfg) { return cfg->mdash.input8.enable; }
int mgos_config_get_default_mdash_input8_enable(void) { return false; }
void mgos_config_set_mdash_input8_enable(struct mgos_config *cfg, int v) { cfg->mdash.input8.enable = v; }

/* mdash.input8.title */
const char * mgos_config_get_mdash_input8_title(const struct mgos_config *cfg) { return cfg->mdash.input8.title; }
const char * mgos_config_get_default_mdash_input8_title(void) { return NULL; }
void mgos_config_set_mdash_input8_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input8.title, v); }

/* mdash.input8.key */
const char * mgos_config_get_mdash_input8_key(const struct mgos_config *cfg) { return cfg->mdash.input8.key; }
const char * mgos_config_get_default_mdash_input8_key(void) { return NULL; }
void mgos_config_set_mdash_input8_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input8.key, v); }

/* mdash.input9 */
const struct mgos_config_mdash_input *mgos_config_get_mdash_input9(const struct mgos_config *cfg) { return &cfg->mdash.input9; }

/* mdash.input9.enable */
int mgos_config_get_mdash_input9_enable(const struct mgos_config *cfg) { return cfg->mdash.input9.enable; }
int mgos_config_get_default_mdash_input9_enable(void) { return false; }
void mgos_config_set_mdash_input9_enable(struct mgos_config *cfg, int v) { cfg->mdash.input9.enable = v; }

/* mdash.input9.title */
const char * mgos_config_get_mdash_input9_title(const struct mgos_config *cfg) { return cfg->mdash.input9.title; }
const char * mgos_config_get_default_mdash_input9_title(void) { return NULL; }
void mgos_config_set_mdash_input9_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input9.title, v); }

/* mdash.input9.key */
const char * mgos_config_get_mdash_input9_key(const struct mgos_config *cfg) { return cfg->mdash.input9.key; }
const char * mgos_config_get_default_mdash_input9_key(void) { return NULL; }
void mgos_config_set_mdash_input9_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.input9.key, v); }

/* mdash.toggle */
const struct mgos_config_mdash_toggle *mgos_config_get_mdash_toggle(const struct mgos_config *cfg) { return &cfg->mdash.toggle; }

/* mdash.toggle.enable */
int mgos_config_get_mdash_toggle_enable(const struct mgos_config *cfg) { return cfg->mdash.toggle.enable; }
int mgos_config_get_default_mdash_toggle_enable(void) { return false; }
void mgos_config_set_mdash_toggle_enable(struct mgos_config *cfg, int v) { cfg->mdash.toggle.enable = v; }

/* mdash.toggle.title */
const char * mgos_config_get_mdash_toggle_title(const struct mgos_config *cfg) { return cfg->mdash.toggle.title; }
const char * mgos_config_get_default_mdash_toggle_title(void) { return NULL; }
void mgos_config_set_mdash_toggle_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.toggle.title, v); }

/* mdash.toggle.key */
const char * mgos_config_get_mdash_toggle_key(const struct mgos_config *cfg) { return cfg->mdash.toggle.key; }
const char * mgos_config_get_default_mdash_toggle_key(void) { return NULL; }
void mgos_config_set_mdash_toggle_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.toggle.key, v); }

/* mdash.toggle1 */
const struct mgos_config_mdash_toggle *mgos_config_get_mdash_toggle1(const struct mgos_config *cfg) { return &cfg->mdash.toggle1; }

/* mdash.toggle1.enable */
int mgos_config_get_mdash_toggle1_enable(const struct mgos_config *cfg) { return cfg->mdash.toggle1.enable; }
int mgos_config_get_default_mdash_toggle1_enable(void) { return false; }
void mgos_config_set_mdash_toggle1_enable(struct mgos_config *cfg, int v) { cfg->mdash.toggle1.enable = v; }

/* mdash.toggle1.title */
const char * mgos_config_get_mdash_toggle1_title(const struct mgos_config *cfg) { return cfg->mdash.toggle1.title; }
const char * mgos_config_get_default_mdash_toggle1_title(void) { return NULL; }
void mgos_config_set_mdash_toggle1_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.toggle1.title, v); }

/* mdash.toggle1.key */
const char * mgos_config_get_mdash_toggle1_key(const struct mgos_config *cfg) { return cfg->mdash.toggle1.key; }
const char * mgos_config_get_default_mdash_toggle1_key(void) { return NULL; }
void mgos_config_set_mdash_toggle1_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.toggle1.key, v); }

/* mdash.toggle2 */
const struct mgos_config_mdash_toggle *mgos_config_get_mdash_toggle2(const struct mgos_config *cfg) { return &cfg->mdash.toggle2; }

/* mdash.toggle2.enable */
int mgos_config_get_mdash_toggle2_enable(const struct mgos_config *cfg) { return cfg->mdash.toggle2.enable; }
int mgos_config_get_default_mdash_toggle2_enable(void) { return false; }
void mgos_config_set_mdash_toggle2_enable(struct mgos_config *cfg, int v) { cfg->mdash.toggle2.enable = v; }

/* mdash.toggle2.title */
const char * mgos_config_get_mdash_toggle2_title(const struct mgos_config *cfg) { return cfg->mdash.toggle2.title; }
const char * mgos_config_get_default_mdash_toggle2_title(void) { return NULL; }
void mgos_config_set_mdash_toggle2_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.toggle2.title, v); }

/* mdash.toggle2.key */
const char * mgos_config_get_mdash_toggle2_key(const struct mgos_config *cfg) { return cfg->mdash.toggle2.key; }
const char * mgos_config_get_default_mdash_toggle2_key(void) { return NULL; }
void mgos_config_set_mdash_toggle2_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.toggle2.key, v); }

/* mdash.button */
const struct mgos_config_mdash_button *mgos_config_get_mdash_button(const struct mgos_config *cfg) { return &cfg->mdash.button; }

/* mdash.button.enable */
int mgos_config_get_mdash_button_enable(const struct mgos_config *cfg) { return cfg->mdash.button.enable; }
int mgos_config_get_default_mdash_button_enable(void) { return false; }
void mgos_config_set_mdash_button_enable(struct mgos_config *cfg, int v) { cfg->mdash.button.enable = v; }

/* mdash.button.title */
const char * mgos_config_get_mdash_button_title(const struct mgos_config *cfg) { return cfg->mdash.button.title; }
const char * mgos_config_get_default_mdash_button_title(void) { return NULL; }
void mgos_config_set_mdash_button_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button.title, v); }

/* mdash.button.method */
const char * mgos_config_get_mdash_button_method(const struct mgos_config *cfg) { return cfg->mdash.button.method; }
const char * mgos_config_get_default_mdash_button_method(void) { return NULL; }
void mgos_config_set_mdash_button_method(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button.method, v); }

/* mdash.button.params */
const char * mgos_config_get_mdash_button_params(const struct mgos_config *cfg) { return cfg->mdash.button.params; }
const char * mgos_config_get_default_mdash_button_params(void) { return NULL; }
void mgos_config_set_mdash_button_params(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button.params, v); }

/* mdash.button.icon */
const char * mgos_config_get_mdash_button_icon(const struct mgos_config *cfg) { return cfg->mdash.button.icon; }
const char * mgos_config_get_default_mdash_button_icon(void) { return NULL; }
void mgos_config_set_mdash_button_icon(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button.icon, v); }

/* mdash.button1 */
const struct mgos_config_mdash_button *mgos_config_get_mdash_button1(const struct mgos_config *cfg) { return &cfg->mdash.button1; }

/* mdash.button1.enable */
int mgos_config_get_mdash_button1_enable(const struct mgos_config *cfg) { return cfg->mdash.button1.enable; }
int mgos_config_get_default_mdash_button1_enable(void) { return false; }
void mgos_config_set_mdash_button1_enable(struct mgos_config *cfg, int v) { cfg->mdash.button1.enable = v; }

/* mdash.button1.title */
const char * mgos_config_get_mdash_button1_title(const struct mgos_config *cfg) { return cfg->mdash.button1.title; }
const char * mgos_config_get_default_mdash_button1_title(void) { return NULL; }
void mgos_config_set_mdash_button1_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button1.title, v); }

/* mdash.button1.method */
const char * mgos_config_get_mdash_button1_method(const struct mgos_config *cfg) { return cfg->mdash.button1.method; }
const char * mgos_config_get_default_mdash_button1_method(void) { return NULL; }
void mgos_config_set_mdash_button1_method(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button1.method, v); }

/* mdash.button1.params */
const char * mgos_config_get_mdash_button1_params(const struct mgos_config *cfg) { return cfg->mdash.button1.params; }
const char * mgos_config_get_default_mdash_button1_params(void) { return NULL; }
void mgos_config_set_mdash_button1_params(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button1.params, v); }

/* mdash.button1.icon */
const char * mgos_config_get_mdash_button1_icon(const struct mgos_config *cfg) { return cfg->mdash.button1.icon; }
const char * mgos_config_get_default_mdash_button1_icon(void) { return NULL; }
void mgos_config_set_mdash_button1_icon(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button1.icon, v); }

/* mdash.button2 */
const struct mgos_config_mdash_button *mgos_config_get_mdash_button2(const struct mgos_config *cfg) { return &cfg->mdash.button2; }

/* mdash.button2.enable */
int mgos_config_get_mdash_button2_enable(const struct mgos_config *cfg) { return cfg->mdash.button2.enable; }
int mgos_config_get_default_mdash_button2_enable(void) { return false; }
void mgos_config_set_mdash_button2_enable(struct mgos_config *cfg, int v) { cfg->mdash.button2.enable = v; }

/* mdash.button2.title */
const char * mgos_config_get_mdash_button2_title(const struct mgos_config *cfg) { return cfg->mdash.button2.title; }
const char * mgos_config_get_default_mdash_button2_title(void) { return NULL; }
void mgos_config_set_mdash_button2_title(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button2.title, v); }

/* mdash.button2.method */
const char * mgos_config_get_mdash_button2_method(const struct mgos_config *cfg) { return cfg->mdash.button2.method; }
const char * mgos_config_get_default_mdash_button2_method(void) { return NULL; }
void mgos_config_set_mdash_button2_method(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button2.method, v); }

/* mdash.button2.params */
const char * mgos_config_get_mdash_button2_params(const struct mgos_config *cfg) { return cfg->mdash.button2.params; }
const char * mgos_config_get_default_mdash_button2_params(void) { return NULL; }
void mgos_config_set_mdash_button2_params(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button2.params, v); }

/* mdash.button2.icon */
const char * mgos_config_get_mdash_button2_icon(const struct mgos_config *cfg) { return cfg->mdash.button2.icon; }
const char * mgos_config_get_default_mdash_button2_icon(void) { return NULL; }
void mgos_config_set_mdash_button2_icon(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mdash.button2.icon, v); }

/* rpc */
const struct mgos_config_rpc *mgos_config_get_rpc(const struct mgos_config *cfg) { return &cfg->rpc; }

/* rpc.enable */
int mgos_config_get_rpc_enable(const struct mgos_config *cfg) { return cfg->rpc.enable; }
int mgos_config_get_default_rpc_enable(void) { return true; }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v) { cfg->rpc.enable = v; }

/* rpc.http_enable */
int mgos_config_get_rpc_http_enable(const struct mgos_config *cfg) { return cfg->rpc.http_enable; }
int mgos_config_get_default_rpc_http_enable(void) { return true; }
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v) { cfg->rpc.http_enable = v; }

/* rpc.service_sys_enable */
int mgos_config_get_rpc_service_sys_enable(const struct mgos_config *cfg) { return cfg->rpc.service_sys_enable; }
int mgos_config_get_default_rpc_service_sys_enable(void) { return true; }
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v) { cfg->rpc.service_sys_enable = v; }

/* rpc.max_frame_size */
int mgos_config_get_rpc_max_frame_size(const struct mgos_config *cfg) { return cfg->rpc.max_frame_size; }
int mgos_config_get_default_rpc_max_frame_size(void) { return 4096; }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v) { cfg->rpc.max_frame_size = v; }

/* rpc.max_queue_length */
int mgos_config_get_rpc_max_queue_length(const struct mgos_config *cfg) { return cfg->rpc.max_queue_length; }
int mgos_config_get_default_rpc_max_queue_length(void) { return 25; }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v) { cfg->rpc.max_queue_length = v; }

/* rpc.default_out_channel_idle_close_timeout */
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(const struct mgos_config *cfg) { return cfg->rpc.default_out_channel_idle_close_timeout; }
int mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(void) { return 10; }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v) { cfg->rpc.default_out_channel_idle_close_timeout = v; }

/* rpc.acl_file */
const char * mgos_config_get_rpc_acl_file(const struct mgos_config *cfg) { return cfg->rpc.acl_file; }
const char * mgos_config_get_default_rpc_acl_file(void) { return NULL; }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.acl_file, v); }

/* rpc.auth_domain */
const char * mgos_config_get_rpc_auth_domain(const struct mgos_config *cfg) { return cfg->rpc.auth_domain; }
const char * mgos_config_get_default_rpc_auth_domain(void) { return "RPC"; }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_domain, v); }

/* rpc.auth_file */
const char * mgos_config_get_rpc_auth_file(const struct mgos_config *cfg) { return cfg->rpc.auth_file; }
const char * mgos_config_get_default_rpc_auth_file(void) { return NULL; }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_file, v); }

/* rpc.uart */
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(const struct mgos_config *cfg) { return &cfg->rpc.uart; }

/* rpc.uart.uart_no */
int mgos_config_get_rpc_uart_uart_no(const struct mgos_config *cfg) { return cfg->rpc.uart.uart_no; }
int mgos_config_get_default_rpc_uart_uart_no(void) { return 0; }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v) { cfg->rpc.uart.uart_no = v; }

/* rpc.uart.baud_rate */
int mgos_config_get_rpc_uart_baud_rate(const struct mgos_config *cfg) { return cfg->rpc.uart.baud_rate; }
int mgos_config_get_default_rpc_uart_baud_rate(void) { return 115200; }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v) { cfg->rpc.uart.baud_rate = v; }

/* rpc.uart.fc_type */
int mgos_config_get_rpc_uart_fc_type(const struct mgos_config *cfg) { return cfg->rpc.uart.fc_type; }
int mgos_config_get_default_rpc_uart_fc_type(void) { return 2; }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v) { cfg->rpc.uart.fc_type = v; }

/* rpc.uart.dst */
const char * mgos_config_get_rpc_uart_dst(const struct mgos_config *cfg) { return cfg->rpc.uart.dst; }
const char * mgos_config_get_default_rpc_uart_dst(void) { return NULL; }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.uart.dst, v); }

/* rpc.ws */
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(const struct mgos_config *cfg) { return &cfg->rpc.ws; }

/* rpc.ws.enable */
int mgos_config_get_rpc_ws_enable(const struct mgos_config *cfg) { return cfg->rpc.ws.enable; }
int mgos_config_get_default_rpc_ws_enable(void) { return true; }
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int v) { cfg->rpc.ws.enable = v; }

/* rpc.ws.server_address */
const char * mgos_config_get_rpc_ws_server_address(const struct mgos_config *cfg) { return cfg->rpc.ws.server_address; }
const char * mgos_config_get_default_rpc_ws_server_address(void) { return NULL; }
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.server_address, v); }

/* rpc.ws.reconnect_interval_min */
int mgos_config_get_rpc_ws_reconnect_interval_min(const struct mgos_config *cfg) { return cfg->rpc.ws.reconnect_interval_min; }
int mgos_config_get_default_rpc_ws_reconnect_interval_min(void) { return 1; }
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int v) { cfg->rpc.ws.reconnect_interval_min = v; }

/* rpc.ws.reconnect_interval_max */
int mgos_config_get_rpc_ws_reconnect_interval_max(const struct mgos_config *cfg) { return cfg->rpc.ws.reconnect_interval_max; }
int mgos_config_get_default_rpc_ws_reconnect_interval_max(void) { return 60; }
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int v) { cfg->rpc.ws.reconnect_interval_max = v; }

/* rpc.ws.ssl_server_name */
const char * mgos_config_get_rpc_ws_ssl_server_name(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_server_name; }
const char * mgos_config_get_default_rpc_ws_ssl_server_name(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_server_name, v); }

/* rpc.ws.ssl_cert */
const char * mgos_config_get_rpc_ws_ssl_cert(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_cert; }
const char * mgos_config_get_default_rpc_ws_ssl_cert(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_cert, v); }

/* rpc.ws.ssl_key */
const char * mgos_config_get_rpc_ws_ssl_key(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_key; }
const char * mgos_config_get_default_rpc_ws_ssl_key(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_key, v); }

/* rpc.ws.ssl_ca_cert */
const char * mgos_config_get_rpc_ws_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_ca_cert; }
const char * mgos_config_get_default_rpc_ws_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_ca_cert, v); }

/* wifi */
const struct mgos_config_wifi *mgos_config_get_wifi(const struct mgos_config *cfg) { return &cfg->wifi; }

/* wifi.ap */
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(const struct mgos_config *cfg) { return &cfg->wifi.ap; }

/* wifi.ap.enable */
int mgos_config_get_wifi_ap_enable(const struct mgos_config *cfg) { return cfg->wifi.ap.enable; }
int mgos_config_get_default_wifi_ap_enable(void) { return true; }
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v) { cfg->wifi.ap.enable = v; }

/* wifi.ap.ssid */
const char * mgos_config_get_wifi_ap_ssid(const struct mgos_config *cfg) { return cfg->wifi.ap.ssid; }
const char * mgos_config_get_default_wifi_ap_ssid(void) { return "PanelErgonomia_??????"; }
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.ssid, v); }

/* wifi.ap.pass */
const char * mgos_config_get_wifi_ap_pass(const struct mgos_config *cfg) { return cfg->wifi.ap.pass; }
const char * mgos_config_get_default_wifi_ap_pass(void) { return "smartindustry"; }
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.pass, v); }

/* wifi.ap.hidden */
int mgos_config_get_wifi_ap_hidden(const struct mgos_config *cfg) { return cfg->wifi.ap.hidden; }
int mgos_config_get_default_wifi_ap_hidden(void) { return false; }
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v) { cfg->wifi.ap.hidden = v; }

/* wifi.ap.channel */
int mgos_config_get_wifi_ap_channel(const struct mgos_config *cfg) { return cfg->wifi.ap.channel; }
int mgos_config_get_default_wifi_ap_channel(void) { return 6; }
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v) { cfg->wifi.ap.channel = v; }

/* wifi.ap.max_connections */
int mgos_config_get_wifi_ap_max_connections(const struct mgos_config *cfg) { return cfg->wifi.ap.max_connections; }
int mgos_config_get_default_wifi_ap_max_connections(void) { return 10; }
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v) { cfg->wifi.ap.max_connections = v; }

/* wifi.ap.ip */
const char * mgos_config_get_wifi_ap_ip(const struct mgos_config *cfg) { return cfg->wifi.ap.ip; }
const char * mgos_config_get_default_wifi_ap_ip(void) { return "192.168.10.1"; }
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.ip, v); }

/* wifi.ap.netmask */
const char * mgos_config_get_wifi_ap_netmask(const struct mgos_config *cfg) { return cfg->wifi.ap.netmask; }
const char * mgos_config_get_default_wifi_ap_netmask(void) { return "255.255.255.0"; }
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.netmask, v); }

/* wifi.ap.gw */
const char * mgos_config_get_wifi_ap_gw(const struct mgos_config *cfg) { return cfg->wifi.ap.gw; }
const char * mgos_config_get_default_wifi_ap_gw(void) { return "192.168.10.1"; }
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.gw, v); }

/* wifi.ap.dhcp_start */
const char * mgos_config_get_wifi_ap_dhcp_start(const struct mgos_config *cfg) { return cfg->wifi.ap.dhcp_start; }
const char * mgos_config_get_default_wifi_ap_dhcp_start(void) { return "192.168.10.2"; }
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.dhcp_start, v); }

/* wifi.ap.dhcp_end */
const char * mgos_config_get_wifi_ap_dhcp_end(const struct mgos_config *cfg) { return cfg->wifi.ap.dhcp_end; }
const char * mgos_config_get_default_wifi_ap_dhcp_end(void) { return "192.168.10.100"; }
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.dhcp_end, v); }

/* wifi.ap.trigger_on_gpio */
int mgos_config_get_wifi_ap_trigger_on_gpio(const struct mgos_config *cfg) { return cfg->wifi.ap.trigger_on_gpio; }
int mgos_config_get_default_wifi_ap_trigger_on_gpio(void) { return -1; }
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v) { cfg->wifi.ap.trigger_on_gpio = v; }

/* wifi.ap.disable_after */
int mgos_config_get_wifi_ap_disable_after(const struct mgos_config *cfg) { return cfg->wifi.ap.disable_after; }
int mgos_config_get_default_wifi_ap_disable_after(void) { return 0; }
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v) { cfg->wifi.ap.disable_after = v; }

/* wifi.ap.hostname */
const char * mgos_config_get_wifi_ap_hostname(const struct mgos_config *cfg) { return cfg->wifi.ap.hostname; }
const char * mgos_config_get_default_wifi_ap_hostname(void) { return NULL; }
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.hostname, v); }

/* wifi.ap.keep_enabled */
int mgos_config_get_wifi_ap_keep_enabled(const struct mgos_config *cfg) { return cfg->wifi.ap.keep_enabled; }
int mgos_config_get_default_wifi_ap_keep_enabled(void) { return true; }
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int v) { cfg->wifi.ap.keep_enabled = v; }

/* wifi.sta */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(const struct mgos_config *cfg) { return &cfg->wifi.sta; }

/* wifi.sta.enable */
int mgos_config_get_wifi_sta_enable(const struct mgos_config *cfg) { return cfg->wifi.sta.enable; }
int mgos_config_get_default_wifi_sta_enable(void) { return true; }
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta.enable = v; }

/* wifi.sta.ssid */
const char * mgos_config_get_wifi_sta_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta.ssid; }
const char * mgos_config_get_default_wifi_sta_ssid(void) { return "Inventoteca_2G"; }
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ssid, v); }

/* wifi.sta.pass */
const char * mgos_config_get_wifi_sta_pass(const struct mgos_config *cfg) { return cfg->wifi.sta.pass; }
const char * mgos_config_get_default_wifi_sta_pass(void) { return "science_7425"; }
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.pass, v); }

/* wifi.sta.user */
const char * mgos_config_get_wifi_sta_user(const struct mgos_config *cfg) { return cfg->wifi.sta.user; }
const char * mgos_config_get_default_wifi_sta_user(void) { return NULL; }
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.user, v); }

/* wifi.sta.anon_identity */
const char * mgos_config_get_wifi_sta_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta.anon_identity; }
const char * mgos_config_get_default_wifi_sta_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.anon_identity, v); }

/* wifi.sta.cert */
const char * mgos_config_get_wifi_sta_cert(const struct mgos_config *cfg) { return cfg->wifi.sta.cert; }
const char * mgos_config_get_default_wifi_sta_cert(void) { return NULL; }
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.cert, v); }

/* wifi.sta.key */
const char * mgos_config_get_wifi_sta_key(const struct mgos_config *cfg) { return cfg->wifi.sta.key; }
const char * mgos_config_get_default_wifi_sta_key(void) { return NULL; }
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.key, v); }

/* wifi.sta.ca_cert */
const char * mgos_config_get_wifi_sta_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta.ca_cert; }
const char * mgos_config_get_default_wifi_sta_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ca_cert, v); }

/* wifi.sta.ip */
const char * mgos_config_get_wifi_sta_ip(const struct mgos_config *cfg) { return cfg->wifi.sta.ip; }
const char * mgos_config_get_default_wifi_sta_ip(void) { return NULL; }
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ip, v); }

/* wifi.sta.netmask */
const char * mgos_config_get_wifi_sta_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta.netmask; }
const char * mgos_config_get_default_wifi_sta_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.netmask, v); }

/* wifi.sta.gw */
const char * mgos_config_get_wifi_sta_gw(const struct mgos_config *cfg) { return cfg->wifi.sta.gw; }
const char * mgos_config_get_default_wifi_sta_gw(void) { return NULL; }
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.gw, v); }

/* wifi.sta.nameserver */
const char * mgos_config_get_wifi_sta_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta.nameserver; }
const char * mgos_config_get_default_wifi_sta_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.nameserver, v); }

/* wifi.sta.dhcp_hostname */
const char * mgos_config_get_wifi_sta_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.dhcp_hostname, v); }

/* wifi.sta1 */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta1(const struct mgos_config *cfg) { return &cfg->wifi.sta1; }

/* wifi.sta1.enable */
int mgos_config_get_wifi_sta1_enable(const struct mgos_config *cfg) { return cfg->wifi.sta1.enable; }
int mgos_config_get_default_wifi_sta1_enable(void) { return false; }
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta1.enable = v; }

/* wifi.sta1.ssid */
const char * mgos_config_get_wifi_sta1_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta1.ssid; }
const char * mgos_config_get_default_wifi_sta1_ssid(void) { return "Inventoteca_2G"; }
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ssid, v); }

/* wifi.sta1.pass */
const char * mgos_config_get_wifi_sta1_pass(const struct mgos_config *cfg) { return cfg->wifi.sta1.pass; }
const char * mgos_config_get_default_wifi_sta1_pass(void) { return "science_7425"; }
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.pass, v); }

/* wifi.sta1.user */
const char * mgos_config_get_wifi_sta1_user(const struct mgos_config *cfg) { return cfg->wifi.sta1.user; }
const char * mgos_config_get_default_wifi_sta1_user(void) { return NULL; }
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.user, v); }

/* wifi.sta1.anon_identity */
const char * mgos_config_get_wifi_sta1_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta1.anon_identity; }
const char * mgos_config_get_default_wifi_sta1_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.anon_identity, v); }

/* wifi.sta1.cert */
const char * mgos_config_get_wifi_sta1_cert(const struct mgos_config *cfg) { return cfg->wifi.sta1.cert; }
const char * mgos_config_get_default_wifi_sta1_cert(void) { return NULL; }
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.cert, v); }

/* wifi.sta1.key */
const char * mgos_config_get_wifi_sta1_key(const struct mgos_config *cfg) { return cfg->wifi.sta1.key; }
const char * mgos_config_get_default_wifi_sta1_key(void) { return NULL; }
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.key, v); }

/* wifi.sta1.ca_cert */
const char * mgos_config_get_wifi_sta1_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta1.ca_cert; }
const char * mgos_config_get_default_wifi_sta1_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ca_cert, v); }

/* wifi.sta1.ip */
const char * mgos_config_get_wifi_sta1_ip(const struct mgos_config *cfg) { return cfg->wifi.sta1.ip; }
const char * mgos_config_get_default_wifi_sta1_ip(void) { return NULL; }
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ip, v); }

/* wifi.sta1.netmask */
const char * mgos_config_get_wifi_sta1_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta1.netmask; }
const char * mgos_config_get_default_wifi_sta1_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.netmask, v); }

/* wifi.sta1.gw */
const char * mgos_config_get_wifi_sta1_gw(const struct mgos_config *cfg) { return cfg->wifi.sta1.gw; }
const char * mgos_config_get_default_wifi_sta1_gw(void) { return NULL; }
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.gw, v); }

/* wifi.sta1.nameserver */
const char * mgos_config_get_wifi_sta1_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta1.nameserver; }
const char * mgos_config_get_default_wifi_sta1_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.nameserver, v); }

/* wifi.sta1.dhcp_hostname */
const char * mgos_config_get_wifi_sta1_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta1.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta1_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.dhcp_hostname, v); }

/* wifi.sta2 */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta2(const struct mgos_config *cfg) { return &cfg->wifi.sta2; }

/* wifi.sta2.enable */
int mgos_config_get_wifi_sta2_enable(const struct mgos_config *cfg) { return cfg->wifi.sta2.enable; }
int mgos_config_get_default_wifi_sta2_enable(void) { return false; }
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta2.enable = v; }

/* wifi.sta2.ssid */
const char * mgos_config_get_wifi_sta2_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta2.ssid; }
const char * mgos_config_get_default_wifi_sta2_ssid(void) { return "Inventoteca_2G"; }
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ssid, v); }

/* wifi.sta2.pass */
const char * mgos_config_get_wifi_sta2_pass(const struct mgos_config *cfg) { return cfg->wifi.sta2.pass; }
const char * mgos_config_get_default_wifi_sta2_pass(void) { return "science_7425"; }
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.pass, v); }

/* wifi.sta2.user */
const char * mgos_config_get_wifi_sta2_user(const struct mgos_config *cfg) { return cfg->wifi.sta2.user; }
const char * mgos_config_get_default_wifi_sta2_user(void) { return NULL; }
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.user, v); }

/* wifi.sta2.anon_identity */
const char * mgos_config_get_wifi_sta2_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta2.anon_identity; }
const char * mgos_config_get_default_wifi_sta2_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.anon_identity, v); }

/* wifi.sta2.cert */
const char * mgos_config_get_wifi_sta2_cert(const struct mgos_config *cfg) { return cfg->wifi.sta2.cert; }
const char * mgos_config_get_default_wifi_sta2_cert(void) { return NULL; }
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.cert, v); }

/* wifi.sta2.key */
const char * mgos_config_get_wifi_sta2_key(const struct mgos_config *cfg) { return cfg->wifi.sta2.key; }
const char * mgos_config_get_default_wifi_sta2_key(void) { return NULL; }
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.key, v); }

/* wifi.sta2.ca_cert */
const char * mgos_config_get_wifi_sta2_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta2.ca_cert; }
const char * mgos_config_get_default_wifi_sta2_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ca_cert, v); }

/* wifi.sta2.ip */
const char * mgos_config_get_wifi_sta2_ip(const struct mgos_config *cfg) { return cfg->wifi.sta2.ip; }
const char * mgos_config_get_default_wifi_sta2_ip(void) { return NULL; }
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ip, v); }

/* wifi.sta2.netmask */
const char * mgos_config_get_wifi_sta2_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta2.netmask; }
const char * mgos_config_get_default_wifi_sta2_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.netmask, v); }

/* wifi.sta2.gw */
const char * mgos_config_get_wifi_sta2_gw(const struct mgos_config *cfg) { return cfg->wifi.sta2.gw; }
const char * mgos_config_get_default_wifi_sta2_gw(void) { return NULL; }
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.gw, v); }

/* wifi.sta2.nameserver */
const char * mgos_config_get_wifi_sta2_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta2.nameserver; }
const char * mgos_config_get_default_wifi_sta2_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.nameserver, v); }

/* wifi.sta2.dhcp_hostname */
const char * mgos_config_get_wifi_sta2_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta2.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta2_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.dhcp_hostname, v); }

/* wifi.sta_cfg_idx */
int mgos_config_get_wifi_sta_cfg_idx(const struct mgos_config *cfg) { return cfg->wifi.sta_cfg_idx; }
int mgos_config_get_default_wifi_sta_cfg_idx(void) { return 0; }
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int v) { cfg->wifi.sta_cfg_idx = v; }

/* wifi.sta_connect_timeout */
int mgos_config_get_wifi_sta_connect_timeout(const struct mgos_config *cfg) { return cfg->wifi.sta_connect_timeout; }
int mgos_config_get_default_wifi_sta_connect_timeout(void) { return 30; }
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v) { cfg->wifi.sta_connect_timeout = v; }

/* wifi.sta_all_chan_scan */
int mgos_config_get_wifi_sta_all_chan_scan(const struct mgos_config *cfg) { return cfg->wifi.sta_all_chan_scan; }
int mgos_config_get_default_wifi_sta_all_chan_scan(void) { return true; }
void mgos_config_set_wifi_sta_all_chan_scan(struct mgos_config *cfg, int v) { cfg->wifi.sta_all_chan_scan = v; }

/* board */
const struct mgos_config_board *mgos_config_get_board(const struct mgos_config *cfg) { return &cfg->board; }

/* board.led1 */
const struct mgos_config_board_led1 *mgos_config_get_board_led1(const struct mgos_config *cfg) { return &cfg->board.led1; }

/* board.led1.pin */
int mgos_config_get_board_led1_pin(const struct mgos_config *cfg) { return cfg->board.led1.pin; }
int mgos_config_get_default_board_led1_pin(void) { return 2; }
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int v) { cfg->board.led1.pin = v; }

/* board.led1.active_high */
int mgos_config_get_board_led1_active_high(const struct mgos_config *cfg) { return cfg->board.led1.active_high; }
int mgos_config_get_default_board_led1_active_high(void) { return false; }
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int v) { cfg->board.led1.active_high = v; }

/* board.led2 */
const struct mgos_config_board_led2 *mgos_config_get_board_led2(const struct mgos_config *cfg) { return &cfg->board.led2; }

/* board.led2.pin */
int mgos_config_get_board_led2_pin(const struct mgos_config *cfg) { return cfg->board.led2.pin; }
int mgos_config_get_default_board_led2_pin(void) { return -1; }
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int v) { cfg->board.led2.pin = v; }

/* board.led2.active_high */
int mgos_config_get_board_led2_active_high(const struct mgos_config *cfg) { return cfg->board.led2.active_high; }
int mgos_config_get_default_board_led2_active_high(void) { return true; }
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int v) { cfg->board.led2.active_high = v; }

/* board.led3 */
const struct mgos_config_board_led3 *mgos_config_get_board_led3(const struct mgos_config *cfg) { return &cfg->board.led3; }

/* board.led3.pin */
int mgos_config_get_board_led3_pin(const struct mgos_config *cfg) { return cfg->board.led3.pin; }
int mgos_config_get_default_board_led3_pin(void) { return -1; }
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int v) { cfg->board.led3.pin = v; }

/* board.led3.active_high */
int mgos_config_get_board_led3_active_high(const struct mgos_config *cfg) { return cfg->board.led3.active_high; }
int mgos_config_get_default_board_led3_active_high(void) { return true; }
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int v) { cfg->board.led3.active_high = v; }

/* board.btn1 */
const struct mgos_config_board_btn1 *mgos_config_get_board_btn1(const struct mgos_config *cfg) { return &cfg->board.btn1; }

/* board.btn1.pin */
int mgos_config_get_board_btn1_pin(const struct mgos_config *cfg) { return cfg->board.btn1.pin; }
int mgos_config_get_default_board_btn1_pin(void) { return 0; }
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int v) { cfg->board.btn1.pin = v; }

/* board.btn1.pull_up */
int mgos_config_get_board_btn1_pull_up(const struct mgos_config *cfg) { return cfg->board.btn1.pull_up; }
int mgos_config_get_default_board_btn1_pull_up(void) { return true; }
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int v) { cfg->board.btn1.pull_up = v; }

/* board.btn2 */
const struct mgos_config_board_btn2 *mgos_config_get_board_btn2(const struct mgos_config *cfg) { return &cfg->board.btn2; }

/* board.btn2.pin */
int mgos_config_get_board_btn2_pin(const struct mgos_config *cfg) { return cfg->board.btn2.pin; }
int mgos_config_get_default_board_btn2_pin(void) { return -1; }
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int v) { cfg->board.btn2.pin = v; }

/* board.btn2.pull_up */
int mgos_config_get_board_btn2_pull_up(const struct mgos_config *cfg) { return cfg->board.btn2.pull_up; }
int mgos_config_get_default_board_btn2_pull_up(void) { return false; }
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int v) { cfg->board.btn2.pull_up = v; }

/* board.btn3 */
const struct mgos_config_board_btn3 *mgos_config_get_board_btn3(const struct mgos_config *cfg) { return &cfg->board.btn3; }

/* board.btn3.pin */
int mgos_config_get_board_btn3_pin(const struct mgos_config *cfg) { return cfg->board.btn3.pin; }
int mgos_config_get_default_board_btn3_pin(void) { return -1; }
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int v) { cfg->board.btn3.pin = v; }

/* board.btn3.pull_up */
int mgos_config_get_board_btn3_pull_up(const struct mgos_config *cfg) { return cfg->board.btn3.pull_up; }
int mgos_config_get_default_board_btn3_pull_up(void) { return false; }
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int v) { cfg->board.btn3.pull_up = v; }
bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) {
  return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema());
}
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) {
  return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings);
}

const struct mgos_conf_entry *mgos_config_schema(void) {
  return mgos_config_get_schema();
}

/* Strings */
static const char *mgos_config_str_table[] = {
  "*",
  "/",
  "192.168.10.1",
  "192.168.10.100",
  "192.168.10.2",
  "255.255.255.0",
  "80",
  "Inventoteca_2G",
  "PanelErgonomia_??????",
  "RPC",
  "esp8266_??????",
  "science_7425",
  "smartindustry",
};

bool mgos_config_is_default_str(const char *s) {
  int num_str = (sizeof(mgos_config_str_table) / sizeof(mgos_config_str_table[0]));
  for (int i = 0; i < num_str; i++) {
    if (mgos_config_str_table[i] == s) return true;
  }
  return false;
}
