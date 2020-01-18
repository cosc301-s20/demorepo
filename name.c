#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[64];
    printf("Type a name: ");
    fgets(name, 64, stdin);
    // name[strlen(name)-1] = '\0'; // squash newline from fgets
    printf("Welcome to C, %s\n", name);
    return EXIT_SUCCESS;
}
