#include <stdio.h>

int main() {
    int N, i;
    float money, price, total;

    scanf("%d", &N);

    for(i = 1; i <= N; i++) {

        scanf("%f", &money);

        total = 0;

        while(1) {
            scanf("%f", &price);

            if(price == -1)
                break;

            total += price;
        }

        if(money >= total)
            printf("PURCHASE APPROVED\n");
        else
            printf("INSUFFICIENT FUNDS\n");
    }

    return 0;
}