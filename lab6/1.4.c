#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **ptr;
  int max = atoi(argv[1]);
  int num = 0;
  for (ptr = environ; *ptr != NULL && num < max; ptr++, num++) 
    printf("%s\n", *ptr); 
}
