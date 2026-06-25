#include<stdio.h>
int main()
{
    int n;
    printf("Choose your Option:");
    scanf("%d",&n);
    if(n == 1){
        printf("$0.50 for water");
    }
    else if (n ==2){
        printf("$1.00 for soda");
    }
    else{
        printf("Invalid Option");
    }
    return 0;
}
