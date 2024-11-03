#include<stdio.h>
int main(){
   int numbers[10];
   int i ;
   int sum = 0 ;
   float average ;
   printf("Please enter ten numbers : \n");
   for (i =0 ; i < 10 ; i++)
   {
      scanf("%d",&numbers[i]);
   }
   
   printf("Your Numbers : ");
   

   for (i =0; i <10; i++)
   {
      printf("%d",numbers[i]);
      if (i<9)
      {
         printf(", ");
      }
   }
   
   for ( i = 0; i < 10 ; i++)
   {
      sum += numbers[i];
      
      
   }
   
   average=(sum/10);
   printf("\n");
   printf("The Sum of Your Numbers : %d\n",sum);
   printf("The Average of Your Numbers : %f",average);
}