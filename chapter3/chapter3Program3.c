#include <stdio.h>


int main(void){
    int prefix, group, publisher, item, check;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check);
    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", prefix, group, publisher, item, check);

    return 0;

}