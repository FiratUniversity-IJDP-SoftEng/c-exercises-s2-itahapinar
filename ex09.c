#include<stdio.h>
int main (){
   int input;
   int i=0;
   int sum = 0;
   
   while (1)
   {
    
   printf("Please enter numbers (Enter -1 to stop) :\n");
   scanf("%d",&input);
   if (input ==-1)
   {
    break;
    
   }
   i++;
   sum +=input;
   }
   float average =(float)sum/i;
   
  printf("You entered %d numbers.  \n",i);
  printf("The Sum of Numbers You Entered : %d\n",sum) ;
  printf("The Average of Numbers You Entered : %f",average);
   
    
}