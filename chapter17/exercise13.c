#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//if inserted as first element prev is still NULL.
//To fix simply set do if prev == NULL newNode->next = cur;