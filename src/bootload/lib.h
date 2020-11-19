#ifndef _LIB_H_INCLUDED_
#define _LIB_H_INCLUDED_

/* プロトタイプ宣言 */
int putc( unsigned char c );        /* １文字送信 */
int puts( unsigned char *str );     /* 文字列送信 */

void *memset(void *b,int c,long len);   /* メモリを特定のバイトデータで埋める */
void *memcpy(void *dst,const void *src,long len);   /* メモリのコピー */
int memcmp(const void *b1,const void *b2,long len); /* メモリの比較 */
int strlen(const char *s);                          /* 文字列の長さ */
char *strcpy(char *dst,const char *ssrc);           /* 文字列のコピー */
int strcmp(const char *s1,const char *s2);          /* 文字列の比較 */
int strncmp(const char *s1,const char *s2,int len); /* 長さ指定での文字列の比較 */
int putxval(unsigned long value,int column);        /* 数値を16進数で表示 */
int putdval(unsigned long value,int column);        /* 数値を10進数で表示 */

#endif