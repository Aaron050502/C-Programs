#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

struct node *find_last(struct node *list, int n);

int main(void) {
    struct node n1 = {10};
    struct node n2 = {10};
    n1.next = &n2;
    struct node n3 = {23};
    n2.next = &n3;

    printf("Hello?");

    struct node *test = find_last(&n1, 10);
    test = test->next;
    printf("%d", test->value);

    return 0;
}


struct node *find_last(struct node *list, int n) {
    struct node* lastOccurance;

    while(list != NULL) {
        if(list->value == n) {
            lastOccurance = list;
        }
        list = list->next;
    }

    if (lastOccurance == NULL) {
        printf("NOT FOUND N");
        return NULL;
    }

    return lastOccurance;
}