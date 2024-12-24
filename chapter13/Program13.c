#include <stdio.h>

#define MAX_VALUE 80

void encrypt(char *message, int shift);

int main(void) {

    char sentence[MAX_VALUE];
    int shift;

    printf("Enter message to be encrypted: ");
    gets(sentence);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    encrypt(sentence, shift);
    printf("%s", sentence);

    return 0;
}

void encrypt(char *message, int shift) {
   

    while(*message) {

        if (*message >= 65 && *message <= 90) {

            if (*message + shift > 90) {
                int leftover = (*message + shift) % 90;
                while (*message + leftover > 90) {
                     leftover = (*message + leftover - 1) % 90;
                }
                *message = 64 + leftover;    
            } else {
                *message += shift;
            }

        }

        else if (*message >= 97 && *message <= 122) {

            if (*message + shift > 122) {
                int leftover = (*message + shift) % 122;
                while (*message + leftover > 122) {
                    leftover = (*message + leftover - 1) % 122;
                }
                *message = 96 + leftover;
            } else {
                *message += shift;
            }
        }

         message++;   
    }



}