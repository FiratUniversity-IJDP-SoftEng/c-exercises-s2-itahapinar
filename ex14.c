#include<stdio.h>
int fibonacci(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }

    
}
int main(){
    int number;
    printf("Please enter a number to calculate of Fibonacci \n");
    scanf("%d",&number);
    
    for (int i = 0; i <= number; i++)
    {
        printf("%d ",fibonacci(i));
    }
    printf("\nThe %dth Fibonacci number is: %d\n", number, fibonacci(number));
    
}
