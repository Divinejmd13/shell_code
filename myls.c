#include<stdio.h>
#include<dirent.h>
#include<errno.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/wait.h>
void Ls(char *dir,int op1,int op2){
    struct dirent *dirL;
    DIR *dirt=opendir(dir);
    if(!dirt){
            if(errno =ENOENT){
                perror("Directory not Available");
            }else{
                perror("Could not read Directory");
            }
            exit(EXIT_FAILURE);
    }
    dirL=readdir(dirt) ;
    while(dirL!=NULL){
        
        if(! op1 && (dirL->d_name[0])==".")
        {continue;}
        printf("%s,   ",dirL->d_name);
        dirL=readdir(dirt) ;
        if(op2){
            printf("\n");
        }
    }
    if(!op2){
        printf("\n");
    }
}

int main(int argc, char *argv[]){
    int id=fork();
    wait(NULL);
    if(id==0){if(argc == 1){
        Ls(".",0,0);
    }else if(argc == 2){
        int op1=0;
        int op2=0;
        char *ptr=(char*)(argv[1]+1);
        while(*ptr){
            if(*ptr == 'a'){
                op1=1;
            }else{
                if(*ptr=='l'){
                    op2=1;
                }else{
                    printf("Option not available");
                    exit(EXIT_FAILURE);
                }
                ptr++;
            }
            
        }Ls(".",op1,op2);
    }}
    }