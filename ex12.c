#include<stdio.h>
int main (){
    int i;
    int number;
    int facto =1 ;
    printf("Please enter a number to calculate of Factorial :\n");
    scanf("%d",&number);
    if (number>=50)
    {
        printf("Your Number is too big.");
    }
    else{
     for ( i = number; i >= 1; i--)
    {
        printf("%d",i);

        if (i>1)
        {
            printf("*");
        }
        
        if (i==1)
        {
            printf("=");
            
        }
        
        facto*=i;
        }
    
    
    printf("%d",facto);
    }
    
    
    
}
