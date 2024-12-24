#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int day_of_year(struct date d);
int compare_dates(struct date dateOne, struct date dateTwo);

int main(void) {
    struct date dateOne, dateTwo;
    printf("Enter first date: ");
    scanf("%d/%d/%d", &dateOne.month, &dateOne.day, &dateOne.year);
    printf("Enter second date: ");
    scanf("%d/%d/%d", &dateTwo.month, &dateTwo.day, &dateTwo.year);

    int comparison = compare_dates(dateOne, dateTwo);
        if (comparison > 0)
        printf("%d/%d/%d comes before %d/%d/%d\n",
               dateOne.month, dateOne.day, dateOne.year, dateTwo.month, dateTwo.day, dateTwo.year);
    else if (comparison < 0)
        printf("%d/%d/%d comes before %d/%d/%d\n",
               dateTwo.month, dateTwo.day, dateTwo.year, dateOne.month, dateOne.day, dateOne.year);
    else
        printf("%d/%d/%d and %d/%d/%d are equal\n", 
               dateOne.month, dateOne.day, dateOne.year, dateTwo.month, dateTwo.day, dateTwo.year);
 
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
int compare_dates(struct date dateOne, struct date dateTwo) {

    int daysdateOne = day_of_year(dateOne);
    int daysdateTwo = day_of_year(dateTwo);

    if (daysdateOne < daysdateTwo) {
        return -1;
    } else if (daysdateTwo < daysdateOne) {
        return 1;
    } else {
        return 0;
    }

}

