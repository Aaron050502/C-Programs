#include <stdio.h>

int main(void) {

    int num1, denom1, num2, denom2, result_num, result_denom;
    char character;

    printf("Enter fractions ");
    scanf("%d/%d%c%d/%d", &num1, &denom1,&character, &num2, &denom2);

    switch(character) {

        case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);
        break;

        case '/':
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        printf("The sum is %d/%d\n", result_num, result_denom);
        break;


        case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);
        break;


        case '+':
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);
        break;

    }

}