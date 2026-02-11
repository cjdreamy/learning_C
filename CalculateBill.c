#include <stdio.h>
#include <stdlib.h>

// int CalculateBill(int U){
//     if (U <= 100){
//         int Bill = 25 * U;
//     }
//     else if (U <= 200){
//         int Bill = 30 * U;
//     }
//     else{
//         int Bill = 35 * U;
//     }
// }   

// int main(){
//     int U;
//     unsigned int Bill;

//     printf("\nEnter Number of Units: ");
//     scanf("%d", &U);

//     printf("Bill = %d\n", CalculateBill(1));
//     return 0;
// }

// user defined function 

int Bill, Units;

// fx prototyping

int CalculateBill(int U);


int main(){
 
    printf("\nEnter Number of Units: ");
     scanf("%d", &Units);

     int Bill = CalculateBill(Units);
     printf("bill is %d ", Bill);
     
}

int CalculateBill(int U){
    int B;
    if (U <= 100){
        int B = 25 * U;
    }
    else if (U <= 200){
        int B = 30 * U;
    }
    else{
        int B = 35 * U;
    }
    return B;
}