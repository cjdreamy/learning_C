#include <stdlib.h>
#include <stdio.h>

//Outputing the largest Num
int Num1, Num2;
int main()
{
    printf("\nEnter Two numbers To compare: ");
    scanf("%d", &Num1);
    scanf("%d", &Num2);
    if(Num1 > Num2){
        printf("%d is the Largest number between '%d and %d'  \n", Num1, Num1, Num2);
    }
    else{
        printf("%d is the Largest number between '%d and %d'  \n", Num2, Num2, Num1);
    }
    return 0;
}