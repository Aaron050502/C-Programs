#include <stdio.h>
#include <string.h>
#define LENGTH 100

int main(void) {

    int month;
    int day;
    int year;
    printf("Enter a date (mm/dd/yyyy): ");
    char date[LENGTH];
    scanf("%d / %d / %d", &month, &day, &year);
    char *months[] = {"January", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December"};
    printf("You entered the date %s %d, %d", months[month - 1], day, year);

}