#include<stdio.h>
int main(){
    int n;
    float money, price, total =0;
    scanf("%d",&n);
    for (int i =1 ;i<=n ; i++){
        scanf("%f",&price);
        total = 0;
        while (1)
        {
            scanf("%f",price);
            if(price == -1){
                break;
            }
            total = total + price;
        }
        if (money>= total){
            printf("Puchased");
        }
        else{
            printf("Not Purchased");
        }
        
    }

}