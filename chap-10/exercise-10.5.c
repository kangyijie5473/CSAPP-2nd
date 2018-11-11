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
    //execise 10.5
    char c;
    int fd1 = open("helloworld", O_RDONLY, 0);
    int fd2 = open("helloworld", O_RDONLY, 0);
    read(fd2, &c, 1);
    dup2(fd2, fd1);
    read(fd1, &c, 1);
    printf("%c", c);
}
