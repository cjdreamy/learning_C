#include <stdio.h>
#include <stdlib.h>
/* Write a C program to input marks of five subjects of a student and calculate
total, average and percentage of all subjects. The program should make use
of user defined functions 
*/
int getTotal(int a, int b, int c, int d, int e);
float getAverage(int ttl );
float getPercentage(int ttl);

int sbj1, sbj2, sbj3, sbj4, sbj5, total;
float Average, percentage;


int main(){

    printf("\n Enter marks of five subjects\n");
    scanf("%d %d %d %d %d", &sbj1, &sbj2, &sbj3, &sbj4, &sbj5);

        printf("\n ____________________\n");
    printf(" \nthe subjects you have entered are\n |  %d  |\n |  %d  |\n |  %d  |\n |  %d  |\n |  %d  |\n ", sbj1, sbj2, sbj3, sbj4, sbj5);

   total = getTotal(sbj1, sbj2, sbj3, sbj4, sbj5);
   Average = getAverage(total);
   percentage = getPercentage(total);

   printf("\n |  TOTAL : %d    \n |  AVERAGE : %.2f  \n |  PERCENTAGE : %.2f   \n", total, Average, percentage);

}

 int getTotal(int a, int b, int c, int d, int e){
    return (sbj1 + sbj2 + sbj3 + sbj4 + sbj5);
}

float getAverage(int ttl){
    return (total / 5.0);
}

float getPercentage(int ttl){
    return ((total/500.0) * 100);
}