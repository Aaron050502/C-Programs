#include <stdio.h>


int main(void)  {
    int n;
    float e = 1;
    printf("Enter a number:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int factorial = 1;

        for(int j = i; j > 0; j--){
            factorial *= j;
        }

        e += 1.0 / factorial;
    }

    printf("e is approximated by: %f", e);
}