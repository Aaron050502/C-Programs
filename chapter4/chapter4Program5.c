#include <stdio.h>

int main(void) {
    int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: \n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10);
    first_sum = d + i2 + i4 +i6 + i8 + i10;
    printf("%d\n", first_sum);
    second_sum = i1 + i3 + i5 + i7 + i9;
    printf("%d\n", second_sum);
    total = 3 * first_sum + second_sum;
    printf("Check digit: %d\n", 9 - ((total - 1) % 10)); 


}