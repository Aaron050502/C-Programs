#include <stdio.h>

int fact(int n) {
    int sum = n;

    for (int i = n - 1; i > 0; i--) {
        sum *= i;
    }

    return sum;

}


int main(void) {


    printf("%d ", fact(5));

    return 0;
}