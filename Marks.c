#include <stdio.h>

// Function declarations
int calcTotal(int m1, int m2, int m3, int m4, int m5);
float calcAverage(int total);
float calcPercentage(int total);

int main() {
    int s1, s2, s3, s4, s5, total;
    float average, percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    // Function calls
    total = calcTotal(s1, s2, s3, s4, s5);
    average = calcAverage(total);
    percentage = calcPercentage(total);

    // Output results
    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f", average);
    printf("\nPercentage = %.2f%%\n", percentage);

    return 0;
}

// Function to calculate total
int calcTotal(int m1, int m2, int m3, int m4, int m5) {
    return m1 + m2 + m3 + m4 + m5;
}

// Function to calculate average
float calcAverage(int total) {
    return total / 5.0;
}

// Function to calculate percentage (assuming each subject is out of 100)
float calcPercentage(int total) {
    return (total / 500.0) * 100;
}
