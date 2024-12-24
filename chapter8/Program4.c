#include <stdio.h>

#define SIZE (int) (sizeof(a) / sizeof(a[0]))

int main(void)
{
    int a[10], i;

    printf("Enter %d numbers: ", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    // Add a newline for cleaner output
    printf("In reverse order:\n");
    for (i = SIZE - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }

    printf("\n");

    return 0;
}
