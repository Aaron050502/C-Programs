#include <stdio.h>

int main(void){

    long long value = 1;
    int input;
    int factor;
    printf("Enter a positive integer: ");
    scanf("%d", &input);
    factor = input;
    while(factor > 0) {
        value *= factor;
        factor--;
    }
    printf("Factorial of %d: %lld", input, value);

    return 0;
}


//a) 7
//b) 12
//c) 12
//d) 
//e)
//f)
//g)