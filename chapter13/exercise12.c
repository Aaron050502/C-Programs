#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void) {

    char *domain = "knking.com";
    char index[100];
    build_index_url(domain, index);
    printf("%s", index);


    return 0;
}

void build_index_url(const char *domain, char *index_url) {

    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}