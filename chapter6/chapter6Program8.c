#include <stdio.h>

int main(void) {
    int days, startingDay;

    printf("Enter number of days in month: ");
    scanf("%d",&days);
    printf("Enter starting day of the week (1=Sun, 7=Sat):");
    scanf("%d", &startingDay);
    for (int j = 0; j < startingDay - 1; j++) {
        printf("\t");
    }

    for (int i = 1; i <= days; i++) {
        printf("%d\t", i);
        if ((startingDay - 1 + i) % 7 == 0) {
            printf("\n");
        }
    }


}