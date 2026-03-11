#include <stdio.h>

int  main(void) {
    char c = 'A';
    short s = 35767;
    int i = 2147483649;
    long l = 5647894323456345686L;
    float f = 3.14f;
    double d = 3.14159265;

    unsigned char uc = 255;
    unsigned short us = 65535;
    unsigned int ui = 4198576345U;

    printf("char value: %c;    size:  %zu bytes\n", c, sizeof(char));
    printf("short value: %d;   size:  %zu bytes\n", s, sizeof(short));
    printf("int value: %d;     size:  %zu bytes\n", i, sizeof(int));
    printf("long value: %ld;   size:  %zu bytes\n", l, sizeof(long));
    printf("float value: %f;   size:  %zu bytes\n", f, sizeof(float));
    printf("double value:%lf;  size:  %zu bytes\n", d,  sizeof(double));
    printf("unsigned char: %c; size:  %zu bytes\n", uc, sizeof(unsigned char));
    printf("unsigned short:%hu;size:  %zu bytes\n", us, sizeof(unsigned short));
    printf("unsigned int:%u;   size:  %zu bytes\n", ui, sizeof(unsigned int));
    printf("\n char c = %c (integer value: %d)\n", c, c);
    printf("signed char max: %d, unsigned char max: %d\n", 127, 255);

    return 0;
}
