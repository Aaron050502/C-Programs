#include <stdio.h>


struct color {
    int red;
    int green;
    int blue;
};



int main(void) {

    const struct color MAGENTA = {255, 0, 255};
    const struct color MAGENTADESIGNATED = {.red = 255, .blue = 255};
    printf("red: %d green: %d blue: %d \n red: %d green: %d blue: %d", MAGENTA.red, MAGENTA.green, MAGENTA.blue, MAGENTADESIGNATED.red, MAGENTADESIGNATED.green, MAGENTADESIGNATED.blue);

    return 0;
}