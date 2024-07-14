#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc , char * argv[]){
    char str[100];
    FILE *f;
    int id=fork();
    wait(NULL);
    if(id==0){f=fopen(argv[1],"r");
    if(f!=NULL){
        while(fgets (str, 50, f ) != NULL){;
        if(str!="\n "){printf("%s \n",str);}
        }
        
    }else{
        perror(" Error");
        exit(EXIT_FAILURE);
    }}
}