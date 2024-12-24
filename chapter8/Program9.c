#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {

    char array[SIZE][SIZE];
    char letter = 'A';
    int row, column, randomNumber, down, up, left, right;

    for(row = 0; row < SIZE; row++) {
        for(column = 0; column < SIZE; column++) {
            array[row][column] = '.';
        }
    }
    
    srand(time(NULL));

    row = 0;
    column = 0;
    while(letter <= 'Z') {
        up = down = left = right = 0;
        
        if (row - 1 >= 0 && array[row - 1][column] == '.') {
            up = 1;
        }

        if (row + 1 < 10 && array[row + 1][column] == '.') {
            down = 1;
        }

        if (column- 1 >= 0 && array[row][column - 1] == '.') {
            left = 1;
        }

        if (column + 1 < 10 && array[row][column + 1] == '.') {
            right = 1;
        }


        if (up + down + left + right == 0) {
            break;
        }

        randomNumber = rand() % 4;

        while(1) {
            if(randomNumber == 0 && up == 1) {
                row--;
                array[row][column] = letter;
                break;
            }

             if(randomNumber == 1 && down == 1) {
                row++;
                array[row][column] = letter;
                break;
            }

             if(randomNumber == 2 && left == 1) {
                column--;
                array[row][column] = letter;
                break;
            }
             if(randomNumber == 3 && right == 1) {
                column++;
                array[row][column] = letter;
                break;
            }
            randomNumber++;
        }


        letter++;
    }


    for(row = 0; row < SIZE; row++) {
        for(column = 0; column < SIZE; column++) {
            printf("%c ", array[row][column]);
        }
        printf("\n");
    }



}