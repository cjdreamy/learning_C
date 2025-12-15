#include <stdlib.h>
#include <stdio.h>

//finding a number is divisible by two (even)?
int Num;
int main()
{
    printf("\nEnter a number: ");
    scanf("%d", &Num);

    if(Num%2 == 0){
        printf("%d is Divisibly by 2 hence '%d is an  EVEN number'\n", Num, Num);
        printf("\t\t\t\t -----------------\n");
    }
    else{
        printf("%d is Not Divisibly by 2 hence '%d is an ODD number'\n", Num, Num);
        printf("\t\t\t\t -----------------\n");

    }
    return 0;
}
