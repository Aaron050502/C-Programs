#include <stdio.h>

#define SIZE 


int main(void) {

    int integers[5][5] = {0};
    int i, j, total;


    for (i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        
        for (j = 0; j < 5; j++) {
            scanf("%d", &integers[i][j]);
        }
    }

    printf("Row totals: ");

    for (i = 0; i < 5; i++){
        total = 0;
        for (j = 0; j < 5; j++) {
            total += integers[i][j];
        }
        printf("%d ", total);
    }

    printf("\nColumn totals: ");

    for (i = 0; i < 5; i++) {
        total = 0;
        for (j = 0; j < 5; j++) {
            total += integers[j][i];
        }
        printf("%d ", total);
    }
}