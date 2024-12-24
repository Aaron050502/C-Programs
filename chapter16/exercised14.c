#include <stdio.h>
#define RECTANGLE 0
#define CIRCLE 1
const double PI = 3.141592653589793;


struct point {
    int x;
    int y;
};

struct shape {
    int shape_kind;
    struct point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
}s;

double computeArea(struct shape shape);
struct point calculateCenter(struct shape shape);
struct shape moveShape(struct shape shape, int x, int y);
struct shape scaleShape(struct shape shape, double c);



int main(void) {



    return 0;
}


double computeArea(struct shape shape) {

    if (shape.shape_kind == RECTANGLE) {
        return shape.u.rectangle.height * shape.u.rectangle.width;
    } 

    return PI * shape.u.circle.radius * shape.u.circle.radius;
    
}

struct shape moveShape(struct shape shape, int x, int y) {
    struct shape newShape = shape;
    newShape.center.x += x;
    newShape.center.y += y;
    return newShape;
}

struct shape scaleShape(struct shape shape, double c) {
    struct shape newShape = shape;
    if(newShape.shape_kind == RECTANGLE) {
        newShape.u.rectangle.height *= c;
        newShape.u.rectangle.width *= c;
    } else {
        newShape.u.circle.radius *= c;
    }
    
    return newShape;
}