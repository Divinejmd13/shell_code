#include<stdio.h>
#include<dirent.h>
#include<errno.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc ,char *argv[]) {
    char str[100];
    scanf("%[^\n]s",str);
    printf("%s",str[1]);
    switch (str)
    {
    case "":
        /* code */
        break;
    
    default:
        break;
    }

    return 0;
}