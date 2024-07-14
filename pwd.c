#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
 char str[1024];
 if( getcwd(str,sizeof(str))!=NULL){
 printf("%s\n",str);}else{
    perror("Error");
 }
 
 return 0;

}