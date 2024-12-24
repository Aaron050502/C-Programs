#include <stdio.h>


void split_date(int day_of_year, int year, int *month, int *day);
int main(void) {
    int month, day;









    return 0;
}





void split_date(int day_of_year, int year, int *month, int *day) {
    int daysLeft = day_of_year;

    for(int i = 1; i <= 12; i++) {

        switch (i) {

            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
               
                if (daysLeft > 31) {
                    daysLeft -= 31;
                } else {
                    *month = i;
                    *day = daysLeft;
                }
                break;


            case 4: case 6: case 9: case 11:
                
                if (daysLeft > 30) {
                    daysLeft -= 30;
                } else {
                    *month = i;
                    *day = daysLeft;
                }
                break;

            case 2:

                if (daysLeft > 28) {
                    daysLeft -= 28;
                }     else {
                    *month = i;
                    *day = daysLeft;
                }
        }
    }



}