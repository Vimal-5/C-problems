#include<stdio.h>
int main() {
    int type,amount;
    printf("enter a type & amount \n");
    scanf("%d %d",&type,&amount);
    switch (type) {
        case 1:{
            int a=5*amount/100;
            printf("%d",amount-a);
            break;
        }
        case 2: {
            int b=15*amount/100;
           printf("%d",amount-b);
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}