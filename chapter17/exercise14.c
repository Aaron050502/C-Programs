#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

void delete_from_list(struct node **list, int n);

int main(void) {

    return 0;
}

void delete_from_list(struct node **list, int n) {

    struct node *entry;
    entry = *list;

    while(entry != NULL) {
        if (entry->value == n) {
            *list = entry->next;
            free(entry);
        }

        list = &entry->next;
        entry = entry->next;
    }
}