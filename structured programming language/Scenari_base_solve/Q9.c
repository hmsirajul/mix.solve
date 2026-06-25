#include<stdio.h>
int main(){
    float rain,total =0, avg;
    int count =0;

    while (1)
    {
        scanf("%f", &rain);

        if(rain == -1){
            break;
        }
        total = total + rain;
        count++;
    }
    if(count >0){
        avg = total/count;
        printf("Average rainfall : %.2f", avg);
    }

    return 0;
}