#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[]){
    chdir(argv[1]);
    char s[100];;
    printf("%s\n",getcwd(s,100));
    return 0;
}
