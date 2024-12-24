#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hour, minutes;
    char time;
    printf("Enter a 12-hour time:");
    scanf("%d:%d %c", &hour, &minutes, &time);
    time = toupper(time);


    hour = ((hour == 12) ? 0 : hour);
    
    if (time = 'P') {
        hour += 12;
    }

    printf("Equivalent 24-hour time: %.2d:%.2d", hour, minutes);


}