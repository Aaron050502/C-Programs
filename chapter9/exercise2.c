#include <stdio.h>

int check(int x, int y, int n);


int main(void) {

    printf("%d", check(-1,3,5));
    return 0;
}


int check(int x, int y, int n) {
    return ((x >= 0 && x < n) && (y >= 0 && y < n)) ? 1 : 0;


}