#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void generate_random_walk(char walk[10][10]);
void print_Array(char walk[10][10]);
int main(void) {

    char array[SIZE][SIZE];

    generate_random_walk(array);    
    print_Array(array);


}

void generate_random_walk(char walk[10][10]) {
    char letter = 'A';
    int row, column, randomNumber, down, up, left, right;

    for(row = 0; row < SIZE; row++) {
        for(column = 0; column < SIZE; column++) {
            walk[row][column] = '.';
        }
    }
    
    srand(time(NULL));

    row = 0;
    column = 0;
    while(letter <= 'Z') {
        up = down = left = right = 0;
        
        if (row - 1 >= 0 && walk[row - 1][column] == '.') {
            up = 1;
        }

        if (row + 1 < 10 && walk[row + 1][column] == '.') {
            down = 1;
        }

        if (column- 1 >= 0 && walk[row][column - 1] == '.') {
            left = 1;
        }

        if (column + 1 < 10 && walk[row][column + 1] == '.') {
            right = 1;
        }


        if (up + down + left + right == 0) {
            break;
        }

        randomNumber = rand() % 4;

        while(1) {
            if(randomNumber == 0 && up == 1) {
                row--;
                walk[row][column] = letter;
                break;
            }

             if(randomNumber == 1 && down == 1) {
                row++;
                walk[row][column] = letter;
                break;
            }

             if(randomNumber == 2 && left == 1) {
                column--;
                walk[row][column] = letter;
                break;
            }
             if(randomNumber == 3 && right == 1) {
                column++;
                walk[row][column] = letter;
                break;
            }
            randomNumber++;
        }

        letter++;
    }

}

void print_Array(char walk[10][10]) {
int row, column;
    
    for(row = 0; row < SIZE; row++) {
        for(column = 0; column < SIZE; column++) {
            printf("%c ", walk[row][column]);
        }
        printf("\n");
    }
}