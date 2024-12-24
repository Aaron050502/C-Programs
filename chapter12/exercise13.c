#include <stdio.h>


void ident(int n, int a[n][n]);
void print(int n, int a[n][n]);


int main(void) {

    int arrayOne[3][3] = {
        {5, 2, 7},
        {1, 3, 4},
        {8, 6, 9}
    };

    print(3, arrayOne);

    ident(3, arrayOne);

    print(3, arrayOne);

    
    int arrayTwo[4][4] = {
        {0, 0, 0, 0},
        {0, 5, 7, 3},
        {2, 6, 1, 4},
        {1, 8, 2, 9}
    };


    print(4, arrayTwo);

    ident(4, arrayTwo);

    print(4, arrayTwo);


    
    int arrayThree[5][5] = {
        {-1, 2, 3, 4, 5},
        {6, -7, 8, 9, 10},
        {11, 12, -13, 14, 15},
        {16, 17, 18, -19, 20},
        {21, 22, 23, 24, -25}
    };


    print(5, arrayThree);

    ident(5, arrayThree);

    print(5, arrayThree);


    return 0;
}


void ident(int n, int a[n][n]) {

    int count = 0;
    int *p;

    for(p = &a[0][0]; p <= &a[n-1][n-1]; p++) {

        if(count == 0) {
            *p = 1;
            count = n;
        } else {
            *p = 0;
            count--;
        }
    }
}

void print(int n, int a[n][n]) {

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");


}