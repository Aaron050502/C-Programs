#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool weekend[7] = {1,0,0,0,0,0,1};
    for (int i = 0; i < (int) (sizeof(weekend) / sizeof(weekend[0])); i++){
        printf("%d ", weekend[i]);


    }


    return 0;
}