#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void) {






    return 0;
}



int day_of_year(int m, int d, int y) {
    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;

    for (int i = 1; i < m; i++){
        days += num_days[i-1];
    }
    if (y % 4 == 0 && m > 2) {
        days++;
    }
    return days + d;
}