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

    // execise 10.2
    int fd1 = open("helloworld", O_RDONLY, 0);
    int fd2 = open("helloworld", O_RDONLY, 0);
    char c;
    read(fd1, &c, 1);
    read(fd2, &c, 1);

    printf("%c", c); //c 这时依然是helloworld第一个字符 因为两个open在文件表中是两个不同的表项，文件的offset独立


}