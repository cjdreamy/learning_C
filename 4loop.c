#include <stdio.h>
#include <stdlib.h>

//smbolic constant
#define PI 3.14

const int MAX = 100;

// literal constant
int MIN = 0;

int main() {
    int a = 0;
    for (int i = 1;i < 3; i++)
    {
        printf("\n%d", a);
        a++;
    }

    int prices[5] = {10, 56, 78, 45, 67};
    for (int i = 0; i < 5; i++){
        printf("\n%d", prices[i]);
    }
    
}