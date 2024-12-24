#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {

    int hour, min, sec;
    split_time(0, &hour, &min, &sec);
    printf("hours: %d minutes: %d seconds: %d\n", hour, min, sec);
    split_time(3600, &hour, &min, &sec);
    printf("hours: %d minutes: %d seconds: %d\n", hour, min, sec);
    split_time(90, &hour, &min, &sec);
    printf("hours: %d minutes: %d seconds: %d\n", hour, min, sec);









    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec){
    *hr = total_sec / 3600;
    *min = (total_sec - (*hr * 3600)) / 60;
    *sec = (total_sec - (*hr * 3600) - (*min * 60));

}