#include<stdio.h>
int main() {
    int n,amount;
    printf("enter a type & amount");
    scanf("%d %d",&n,&amount);
    switch (n) {
        case 1: {
            printf("Delivery price=50");
            break;
        }
        case 2: {
            if (amount>=1000) {
                printf("Free");
            }
            else {
                printf("Delivery price=100");
            }
            break;
        }
    }
    return 0;
}