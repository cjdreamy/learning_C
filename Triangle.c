           
#include <stdio.h>
#include <math.h>

int main() {
    float side, area;

    // Input side length
    printf("Enter the side of the equilateral triangle: ");
    scanf("%f", &side);

    // Calculate area
    area = (sqrt(3) / 4) * side * side;

    // Output result
    printf("Area of the equilateral triangle = %.4f\n", area);

    return 0;
}
