#include <stdio.h>


void find_Closest_flight(int desired_time, int *departute_time, int *arrival_time);

int main(void) {

    int desired_time,
        departue_time,
        arrival_time,
        hour,
        minute;
       

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    desired_time = hour * 60 + minute;
    find_Closest_flight(desired_time, &departue_time, &arrival_time);

    printf("Closest departure time is %.2d:%.2d arriving at %.2d:%.2d", 
            departue_time / 60, departue_time % 60,
            arrival_time / 60, arrival_time % 60
    );
 

    return 0;
}




void find_Closest_flight(int desired_time, int *departute_time, int *arrival_time) {
    int d1 = 480,
        d2 = 583,
        d3 = 679,
        d4 = 767,
        d5 = 840,
        d6 = 945,
        d7 = 1140,
        d8 = 1305,
        a1 = 616,
        a2 = 712,
        a3 = 811,
        a4 = 900,
        a5 = 968,
        a6 = 1075,
        a7 = 1280,
        a8 = 1438;
        

    if (desired_time <= d1 + (d2 - d1) / 2) {  *departute_time = d1;
        *arrival_time =  a1; }
    else if (desired_time < d2 + (d3 - d2) / 2)
        {  *departute_time = d2;
        *arrival_time =  a2; }
    else if (desired_time < d3 + (d4 - d3) / 2)
        {  *departute_time = d3;
        *arrival_time =  a3; }
    else if (desired_time < d4 + (d5 - d4) / 2)
        {  *departute_time = d4;
        *arrival_time =  a4; }
    else if (desired_time < d5 + (d6 - d5) / 2)
        {  *departute_time = d5;
        *arrival_time =  a5; }
    else if (desired_time < d6 + (d7 - d6) / 2)
        {  *departute_time = d6;
        *arrival_time =  a6; }
    else if (desired_time < d7 + (d8 - d7) / 2)
        {  *departute_time = d7;
        *arrival_time =  a7; }
    else
        {  *departute_time = d8;
        *arrival_time =  a8; }

}
