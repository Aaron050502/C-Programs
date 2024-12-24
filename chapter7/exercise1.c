#include <stdio.h>

int main (void) {
    int a = 077; //63
    int b = 0x77; // 119
    int c = 0XABC; // 2748


    printf("%d %d %d", a, b, c);


    return 0;
}