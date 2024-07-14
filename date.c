#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<sys/wait.h>
    int main(){
        int id=fork();
        wait(NULL);
        if(id==0){time_t tim;
        time(&tim);
        printf("%s",ctime(&tim));}
    }