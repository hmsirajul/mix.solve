#include<stdio.h>
int main(){
    float len, wid, area;
    scanf("%f %f", &len, &wid);
    area = len * wid;
    printf("Area of Rectangle = %.2f",area);

    return 0;
}