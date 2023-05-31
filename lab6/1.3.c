#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[]) {
    char **ptr;
    int num = 0
    for (ptr = environ; *ptr != NULL && num < 10; ptr++, num++) {
        printf("%s\n", *ptr);
    }
    return 0;
}
