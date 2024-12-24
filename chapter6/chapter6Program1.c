#include <stdio.h>

int main(void) {
    float max, inputNum;
    max = 0;
    
    for (; ;) {
        printf("Enter a number: ");
        scanf("%f", &inputNum);
        if (inputNum <= 0) {
            break;
        }
        if (inputNum > max) {
            max = inputNum;
        }
    }
    printf("The largest number entered was %.2f", max);
}