#include <stdio.h>


int main(void)  {
    int n;
    float e = 1;
    float ee;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Enter e: ");
    scanf("%f", &ee);

    do {

        for(int i = 1; i <= n; i++) {
            int factorial = 1;

            for(int j = i; j > 0; j--){
                factorial *= j;
            }

            e += 1.0 / factorial;
        }
    } while (e > ee);

    printf("e is approximated by: %f", e);
}