//
// Created by kang on 18-11-11.
//

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>
int main()
{
    //execise 10.3
    char c;
    int fd = open("helloworld", O_RDONLY, 0);
    if (fork() == 0) {
        read(fd, &c, 1);
        exit(0);
    }
    wait(NULL);
    read(fd, &c, 1);
    printf("%c", c); //C这时是helloworld的第二个字符，因为子进程复制了父进程的描述符表
}
