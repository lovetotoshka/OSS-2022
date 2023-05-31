#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork(); // определить, в каком процессе мы находимся, помогает переменная pid
    if (pid == 0) {
        printf("Сообщение из дочернего процесса\nРодительский PID: %d\nДочерний PID: %d\n", getppid(), getpid());
    }
    return 0;
}
