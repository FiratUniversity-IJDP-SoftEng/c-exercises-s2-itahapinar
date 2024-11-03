#include<stdio.h>
 int main(){
    int i;
    for(i = 1; i<=10; i++){
        printf("%-2d %-2d %-2d \n",(i*5),100-((i-1)*10+1),i);

    }
 }