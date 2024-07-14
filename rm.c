#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc , char *argv[]){
    int id=fork();
    wait(NULL);
    if(id==0)
    remove(argv[1]);
}