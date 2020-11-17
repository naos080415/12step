#ifndef _LIB_H_INCLUDED_
#define _LIB_H_INCLUDED_

int serial_init(int index);       // デバイスの初期化
int serial_is_send_enable(int index,unsigned char b):       // 送信可能か?
int serial_send_byte(int index,unsigned char b);            // 一文字送信

#endif