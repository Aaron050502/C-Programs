#include <stdio.h>

void test(void);

int main(void) {

    enum weekdays {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
    
    enum weekdays s1, s2;
    s1 = TUESDAY;
    s2 = TUESDAY;
    printf("%d", s1 + s2);

    
    return 0;
}


