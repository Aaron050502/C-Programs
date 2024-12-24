#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n);

int main(void) {





    return 0;
}

int read_line(char str[], int n) {

    int ch, i = 0;
     
   

    while ((ch = getchar()) != '\n') {
        if (isspace(ch) && i == 0)
            ;
        else if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}


int read_lineTwo(char str[], int n) {

    int ch, i = 0;
     
   

    while (!isspace(ch = getchar())) {
        
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int read_lineThree(char str[], int n) {

    int ch, i = 0;
     
    do {
        ch = getchar();
        if (i < n) {
            str[i++] = ch;
        }
    } while(ch != '\n');
    str[i] = '\0';
    return i;
}


int read_lineFour(char str[], int n) {

 int ch, i;

  for (i = 0; i < n; i++) {
    ch = getchar();
    if (ch == '\n')
      break;
    str[i] = ch;
  }
  str[i] = '\0';
  return i;
}




