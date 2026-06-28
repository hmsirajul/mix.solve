// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int number;
    printf("Enter your number (1 - 12 ) : ");
    scanf("%d",&number);
   if(number == 3 || number == 5 || number == 7 || number == 8 || number == 10 || number == 12)
    {
        printf(" Day 31 in a month");
    }
    if(number == 2 ){
        printf(" Day 28 in a month");
    }
    if(number == 4 || number == 6 || number == 9 || number == 11){
        printf(" Day 30 in a month");
    }
    
    return 0;
}