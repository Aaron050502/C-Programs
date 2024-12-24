#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point {
    int x;
    int y;
};
struct rectangle {
    struct point upper_left;
    struct point lower_right;
    struct rectangle *p;
};

struct rectangle *p;



int main(void) {

    p = (struct rectangle *) malloc(sizeof(struct rectangle));
    p->upper_left.x = 10;
    p->upper_left.y = 25;
    p->lower_right.x = 20;
    p->lower_right.y = 15;

    printf("Upper_Left: X:%d Y:%d\nLower_Right: X:%d Y:%d", p->upper_left.x, p->upper_left.y, p->lower_right.x, p->lower_right.y);  


    return 0;
}