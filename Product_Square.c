#include <stdio.h>

int Product(int x, int y, int z){
    return x * y * z;
}
int Square(int x){
    return x * x;
}   
int main(){
    int x, y, z;

    printf("\nEnter three numbers:");
    scanf("%d %d %d", &x, &y, &z);

    printf("product %d\n", Product(x, y, z));
    printf("Square of %d: %d\n", x, Square(x));
    printf("Square of %d: %d\n", y, Square(y));
    printf("Square of %d: %d\n", z, Square(z));
    return 0;

}