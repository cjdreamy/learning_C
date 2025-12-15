#include <stdio.h>
#include <stdlib.h>

//grading students based on their marks?

float Marks;
int main()
{
    printf("\nEnter Student's marks:  ");
    scanf("%f", &Marks);

    if (Marks >=70){
        printf("GRADE: A\n");
    }
    else if (Marks >=60)
    {
        printf("GRADE: B\n");
    }
    else if (Marks >=50)
    {
        printf("GRADE: C\n");
    }
    else if (Marks >=60)
    {
        printf("GRADE: D");
    }
    else
    printf("FAIL: F");
    return 0;
}