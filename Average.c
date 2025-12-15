#include <stdio.h>
#include <stdlib.h>
#define TotalSubjects 3
#define PASSMARK 50

//grading students based on their marks?

float Sbjct1, Sbjct2, Sbjct3, Average;
int main()
{
    printf("\nEnter Student's marks:  ");
    scanf("%f %f %f", &Sbjct1, &Sbjct2, &Sbjct3);

Average = (Sbjct1+Sbjct2+Sbjct3)/TotalSubjects;

if (Average >= PASSMARK){
    printf("\n'PASS' with an average of %.2f which Meets the passmark of %d\n", Average, PASSMARK);
    printf("------\n");
}
else{
    printf("\n'FAIL' with an average of %.2f which is below the passmark of %d\n", Average, PASSMARK);
    printf("------\n");
}
   
    return 0;
}