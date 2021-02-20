#include <stdio.h>

int main() {
    int i = 0x01234567;
    char* p = (char*)&i;
    printf("%0x\n", *p);
    printf("%0x\n", *(p+1));
    printf("%0x\n", *(p+2));
    printf("%0x\n", *(p+3));

    printf("%p\n", p);
    printf("%p\n", p+1);
    printf("%p\n", p+2);
    printf("%p\n", p+3);

    printf("%p\n", (int*)p+1);

    /*
     * 67
     * 45
     * 23
     * 1
     * 0x7ffcc11a6ad4
     * 0x7ffcc11a6ad5
     * 0x7ffcc11a6ad6
     * 0x7ffcc11a6ad7
     * 0x7ffc221e7cc8
     *
     */

    return 0;
}
