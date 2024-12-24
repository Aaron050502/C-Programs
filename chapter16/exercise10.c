#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point upper_left;
    struct point lower_right;
};

int calculate_area(struct rectangle rect);

struct point compute_center(struct rectangle rect);

void move_rectangle(struct rectangle *rect, int x, int y);

bool lies_within(struct rectangle rect, struct point point);


int main(void) {

    struct rectangle test = {(struct point) {2,6}, (struct point) {4,2}};
    move_rectangle(&test, 3, 4);
    
    printf("Upper Left: x:%d y:%d\nUpper Right: x:%d y:%d\n", test.upper_left.x, test.upper_left.y, test.lower_right.x, test.lower_right.y);
    struct point testt = compute_center(test);
    printf("X: %d Y:%d", testt.x, testt.y);

    return 0;
}

int calculate_area(struct rectangle rect) {

    int absoluteLength = rect.lower_right.x - rect.upper_left.x;
    int absoluteWidth = rect.upper_left.y - rect.lower_right.y;

    return absoluteLength * absoluteWidth;

}

struct point compute_center(struct rectangle rect) {

    
    return (struct point) {(int) (rect.lower_right.x + rect.upper_left.x) / 2,
    (int) (rect.lower_right.y + rect.upper_left.y) / 2};
}


void move_rectangle(struct rectangle *rect, int x, int y) {
    rect->lower_right.x += x;
    rect->upper_left.x += x;
    rect->lower_right.y += y;
    rect->upper_left.y += y;
}

bool lies_within(struct rectangle rect, struct point point) {
    if (point.x < rect.upper_left.x || point.x > rect.lower_right.x || point.y > rect.upper_left.y || point.y < rect.lower_right.y) {
        return false;
    }

    return true;

}