#include<stdio.h>
int factorial(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int number;
    printf("Please Enter A Number to calculate of factorial\n");
    scanf("%d",&number);
    int result = factorial(number);
    printf("Your answer is: %d",result);
}