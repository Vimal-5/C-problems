#include<stdio.h>
int main() {
    int n,payment_method;
    printf("enter a plan & method");
    scanf("%d %d",&n,&payment_method);
    switch (n) {
        case 1: {
            if (payment_method==11 || payment_method==12) {
                printf("Pay 179");
            }
            else {
                printf("Pay 199");
            }
            break;
        }
        case 2: {
            if (payment_method==11 || payment_method==12) {
                printf("Pay 379");
            }
            else {
                printf("Pay 399");
            }
            break;
        }
    }
    return 0;
}