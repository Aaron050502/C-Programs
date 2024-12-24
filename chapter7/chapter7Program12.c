#include <stdio.h>

int main(void) {
    char operator;
    float operandOne, operandTwo;
    float sum;

    printf("Enter an expression:");
    scanf("%f", &operandOne);
    sum = operandOne;
    
    

    for(;;){
        operator = getchar();

        if (operator == '\n') {
            break;
        }
        
        scanf("%f", &operandTwo);

        switch(operator) {
            
            case '+' :
                sum += operandTwo;
                break;

            case '-' :
                sum -= operandTwo;
                break;

            case '*': 
                sum *= operandTwo;
                break;

            case '/':
                sum /= operandTwo;
                break;
        }
    }

   
    printf("Value of expression is: %f", sum);






    return 0;
}