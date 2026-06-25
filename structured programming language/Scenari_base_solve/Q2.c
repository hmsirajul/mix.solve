#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>=40 && a<=100){
        printf("Pass");
    }
    else{
        printf("Fail");
    }

    return 0;
}