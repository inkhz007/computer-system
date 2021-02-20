#include <stdio.h>
#include <string.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i = 0;
    for (; i < len; ++i) {
        printf(" %.2x", start[i]);
    }

    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void* x) {
    show_bytes((byte_pointer)&x, sizeof(void*));
}

void show_string(char* s) {
    show_bytes((byte_pointer)s, strlen(s));
}

int main() {
    char* p = "hello world";
    printf(" %p\n", p);

    show_int(0x12345678);
    show_float(3.1415926);
    show_pointer("hello world");
    show_string("abcdef");

    /*
     0x400706
     78 56 34 12
     da 0f 49 40
     06 07 40 00 00 00 00 00
     61 62 63 64 65 66
     */

    return 0;
}
