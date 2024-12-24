#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


struct node {
    int value;
    struct node *next;
};

struct node *top = NULL;


void make_empty(void);
int is_empty(void);
bool push(int i);
int pop(void);



int main(void)  {


    return 0;
}



void make_empty(void) {
    
    while(top != NULL) {
        struct node *temp = top;
        top = top->next;
        free(temp);
    }
}


int is_empty(void) {

    return (top == NULL);
}

bool push(int i) {
    struct node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
    return false;

    newNode->value = i;
    newNode->next = top;
    top = newNode;
    return true;
}
int pop(void){
    
    if (is_empty) {
        printf("Stack underflow terminating");
        exit(EXIT_FAILURE);
    }

    struct node *temp = top;
    int i = top->value;
    top = top->next;
    free(temp);
    return i;

}

