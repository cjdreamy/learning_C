#include <stdio.h>
#include <stdlib.h>

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