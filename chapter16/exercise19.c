#include <stdio.h>

typedef enum {electromechanical, solidstate} machinestate;


struct pinball_machine {
    char name[40 + 1];
    int year;
    machinestate type;
    int players;
};


int main(void) {



    return 0;
}