#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *create_array(int n, int initial_value);

int main(void) {

    int *array = create_array(7, 8);
    for(int i = 0; i < 7; i++){
        printf("%d", array[i]);
    }

    return 0;
}


int *create_array(int n, int initial_value) {

    int *array = calloc(n, sizeof(int));
    if (array == NULL) {
        return NULL;
    }
    for(int *p = array; p < array + n; p++) {
        *p = initial_value;
    }

    return array;
}