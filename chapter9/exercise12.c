#include <stdio.h>


int evaluate_position(char board[8][8]);

int main(void) {

        char board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    int score = evaluate_position(board);
    printf("Board evaluation score: %d\n", score);



    return 0;
}

int evaluate_position(char board[8][8]) {
    int i, j, blackPoints = 0, whitePoints = 0;
    char currentChar;

    for (i = 0; i < 8; i++){
        for(j = 0; j < 8; j++) {
            currentChar = board[i][j];

            switch(currentChar) {

                case 'Q':
                    whitePoints += 9;
                    break;

                case 'R':
                    whitePoints += 5;
                    break;


                case 'B': case 'N':
                    whitePoints += 3;
                    break;

                case 'P':
                    whitePoints += 1;
                    break;

                case 'q':
                    blackPoints += 9;
                    break;

                case 'r':
                    blackPoints += 5;
                    break;


                case 'b': case 'n':
                    blackPoints += 3;
                    break;

                case 'p':
                    blackPoints += 1;
                    break;  

                default:
                    break;      
            }
        } 
    }
    return whitePoints - blackPoints;
 
}