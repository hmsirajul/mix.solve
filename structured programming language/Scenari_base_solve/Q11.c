#include<stdio.h>
int main(){
    int t ;
    float balance, dis ,total;
    scanf("%d", &t);
    for (int i=1;i<=t;i++){
        scanf("%f", &balance);
        total = 0;
        while (1)
        {
            scanf("%f", &dis);
            if(dis == -1){
                break;
            }
            total += dis * 20;
        }
        if(balance >= total){
            printf("RIDE CONFIRMED\n");
        }
        else{
            printf(" TOP UP REQUIRED");
        }
    }
}