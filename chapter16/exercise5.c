#include <stdio.h>


struct date {
    int month;
    int day;
    int year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);


int main(void) {

    struct date d1 = {6, 25, 1999};
    struct date d2 = {6, 14, 2001};
    printf("Day of the year %d \n", day_of_year(d1));
    printf("Comparison of d1 and d2; %d", compare_dates(d1,d2));


    return 0;
}

int day_of_year(struct date d) {
    
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    
    if (d.year % 4 == 0 && !(d.year % 100 == 0 && d.year % 400 != 0)){
        sum++;
    }

    for (int i = 0; i < d.month - 1; i++) {  
        sum += days[i];    
    }
    sum += d.day;


    return sum;
}
int compare_dates(struct date d1, struct date d2) {

    int daysd1 = day_of_year(d1);
    int daysd2 = day_of_year(d2);

    if (daysd1 < daysd2) {
        return -1;
    } else if (daysd2 < daysd1) {
        return 1;
    } else {
        return 0;
    }

}

