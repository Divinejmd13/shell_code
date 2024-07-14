#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int agrc,char *argv[]){
    int Flag;
    printf("In the code");
    printf("%s\n",argv[1]);
    int id=fork();
    wait(NULL);
   if(id==0){ Flag=mkdir(argv[1],0777); // 0777 is for permission
    if(!Flag){
        printf("Created Directory Sucessfully\n");

    }else{
        printf("Process Failed ;(\n");
    }
    }
}