#include <stdio.h>
#include <ctype.h>
#define LENGTH 10


float compute_GPA(char grades[], int n);

int main(void){

    char grades[LENGTH] = {'A', 'b', 'B', 'B', 'b', 'B', 'a', 'A', 'A', 'a'};
    printf("%.2f", compute_GPA(grades, LENGTH));



    return 0;
}


float compute_GPA(char grades[], int n){
    int i;
    float sum = 0.0;
    char currentChar;

    for (i = 0; i < n; i++) {
        
        currentChar = toupper(grades[i]);
        switch(currentChar) {

            case 'A':
                sum += 4;
                break;
                
            case 'B':
                sum += 3;
                break;


            case 'C':
                sum += 2;
                break;


            case 'D':
                sum += 1;
                break;


            case 'F':
                sum += 0;
                break;            
            }
    }

    return sum / n;

}