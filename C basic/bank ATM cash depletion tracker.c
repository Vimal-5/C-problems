#include<stdio.h>
int main() {
    int n,ATM_cash,wd_amount,a=0,b=0,count=0;
    scanf("%d %d",&ATM_cash,&n);
    while (n>0) {
        scanf("%d",&wd_amount);
        b+=wd_amount;
        if (b<=ATM_cash) {
            count++;
            a+=wd_amount;
        }
            n--;
    }
    printf("Successful withdrawals: %d\n",count);
    printf("Remaining cash: %d",ATM_cash-a);
    return 0;
}