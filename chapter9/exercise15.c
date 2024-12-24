#include <stdio.h>

double median(double x, double y, double z);
int main(void) {


    return 0;
}

double median(double x, double y, double z){
    double result;

    if (x <= y) {
        if (y <= z) {
            result = y;
        } else if (x <= z) {
            result = z;
        }
    }





}
