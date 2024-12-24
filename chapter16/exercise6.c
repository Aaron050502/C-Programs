#include <stdio.h>


struct time {
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds);

int main(void) {


    struct time test = split_time(8274);
    printf("Hours: %d Minutes: %d Seconds: %d", test.hours, test.minutes, test.seconds);

    return 0;
}

struct time split_time(long total_seconds) {
    int hours = total_seconds / 3600;
    int minutes = (total_seconds - hours * 3600) / 60;
    int seconds = (total_seconds - hours * 3600 - minutes * 60);

    return (struct time) {hours, minutes, seconds};

}