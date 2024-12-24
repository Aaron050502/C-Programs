#include <stdio.h>


int testing(int x, int y) {

    return x + y;
}

int main(void) {



    int i = testing(2.23, 4.23);
    printf("%d", i);

    return 0;
}