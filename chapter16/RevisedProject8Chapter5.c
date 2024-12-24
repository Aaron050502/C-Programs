#include <stdio.h>

struct time {
    int departure;
    int arrival;
};


int main(void) {

    int user_time,
        hour,
        minute;

    struct time flights[] = {
        {480, 616},
        {583, 712},
        {679, 811},
        {767, 900},
        {840, 968},
        {945, 1075 },
        {1140, 1280},
        {1305, 1438}
    };    

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    printf("Closest departure time is ");

    if (user_time <= flights[0].departure + (flights[1].departure - flights[0].departure) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (user_time < flights[1].departure + (flights[2].departure - flights[1].departure) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (user_time < flights[2].departure + (flights[3].departure - flights[2].departure) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (user_time < flights[3].departure + (flights[4].departure - flights[3].departure) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (user_time < flights[4].departure + (flights[5].departure - flights[4].departure) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (user_time < flights[5].departure + (flights[6].departure - flights[5].departure) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (user_time < flights[6].departure + (flights[7].departure - flights[6].departure) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}