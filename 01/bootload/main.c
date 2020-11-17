#include "defines.h"
#include "serial.h"
#include "lib.h"

int main(void){
    serial_init(SERIAL_DEFAULT_DEVICE);     /* シリアル・デバイスを初期化 */

    puts("Hello World\n");                  /* Hello World\nと出力 */

    while (1)
    {
        /* code */
    }

    return 0;
}