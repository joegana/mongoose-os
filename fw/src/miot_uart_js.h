/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_MIOT_UART_JS_H_
#define CS_FW_SRC_MIOT_UART_JS_H_

#if MG_ENABLE_JS
struct v7;
void miot_uart_api_setup(struct v7 *v7);
void miot_uart_js_init(struct v7 *v7);
#endif

#endif /* CS_FW_SRC_MIOT_UART_JS_H_ */