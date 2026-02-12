#include <stdlib.h>
#include <stdio.h>

int main(){
    int p = 0;
    do{
        printf("\nI am executing the do while loop for the %d time\n", p);
        p++;
    } while (p < 10);
    printf("my last execution is at %d that is when i executed out of the loop\n", p);
    return 0;
}