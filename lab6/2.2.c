#include <stdio.h>
#include <unistd.h>

int main()
{
  int pid = fork(); // определить, в каком процессе мы находимся, помогает переменная pid
  sleep(5);
  return 0;
}
