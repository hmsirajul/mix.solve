#include<stdio.h>
int main(){
    float len, redius, area;
    scanf("%f", &redius);
    area = 3.1416 * redius * redius;
    printf("Area of Circle = %.2f", area);
    return 0;
}