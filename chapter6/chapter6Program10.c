#include <stdio.h>


int main(void) {
    int d1, d2, m1, m2, y1, y2, minD, minM, minY;

     printf("Enter a date (mm/dd/yy)");
     scanf("%d/%d/%d", &m1, &d1, &y1);
     minD = d1;
     minM = m1;
     minY = y1;

    for (;;) {

        printf("Enter a date (mm/dd/yy)");
        scanf("%d/%d/%d", &m2, &d2, &y2);
        if(m2 == 0 && d2 == 0 && y2 == 0) {
            break;
        }

        if (y2 < minY) {
            minD = d2;
            minM = m2;
            minY = y2;
            continue;
        } else if (m2 < minM && y2 == minY) {
            minD = d2;
            minM = m2;
            minY = y2;
            continue;
        } else if (d2 < minD && y2 == minY && m2 == minM) {
            minD = d2;
            minM = m2;
            minY = y2;
            continue;
        } 
    }

    printf("%d/%d/%.2d is the earliest date:", minM, minD, minY);
}   