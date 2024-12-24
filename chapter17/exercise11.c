#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

int count_occurences(struct node *list, int n);

int main(void) {
    struct node n1 = {10};
    struct node n2 = {10};
    n1.next = &n2;
    struct node n3 = {23};
    n2.next = &n3;

    printf("%d", count_occurences(&n1, 10));
    return 0;
}


int count_occurences(struct node *list, int n) {
    int count = 0;

    while(list != NULL) {
        if(list->value == n) {
            count++;
        }
        list = list->next;
    }

    return count;
}