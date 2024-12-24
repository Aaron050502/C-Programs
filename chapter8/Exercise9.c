#include <stdio.h>

int main(void) {

    int temperature[30][24] = {0};

    double sum = 0;

    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 24; j++) {
            sum += temperature[i][j];
        }
    }

    sum /= (30 * 24);





    return 0;
}