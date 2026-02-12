#include <stdio.h>

   /* Declare an array to hold expenses, and a counter variable */

  float expenses[25];
   int count;
   float sum=0.0;

   int main()
  {
    /* Input data from keyboard into array */

     for (count = 0; count < 12; count++)
      {
          printf("Enter expenses for month %d: ", count+1);
          scanf("%f", &expenses[count]);
         sum=sum + expenses[count];
      }
      
     /* Print array contents */
      for (count = 0; count < 12; count++)
     {
        printf("Month %d = $%.2f\n", count + 1, expenses[count]);
     }
      printf( "\n\nThe Total expenses is  = %df \n",  sum );
             printf( "\n\nThe average expenses is =  %f \n", ( sum / 12) );

     return 0;
  }
