#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main() {
    if(!fork()) {
        if(fork() && fork()){
           wait(NULL);
        fork();
        printf("1"); 
        }else{
        wait(NULL);
        printf("2");
        }
    }else {
        wait(NULL);
        printf("3");
    }
    wait(NULL);
    printf("4");
    return 0;
}