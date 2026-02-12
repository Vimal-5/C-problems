#include<stdio.h>
int main() {
    int b_per,n,b_drain,b;
    scanf("%d %d",&b_per,&n);
    for (int i=1;i<=n;i++) {
        scanf("%d",&b_drain);
        b=b+b_drain;
    }
    printf("RemainingBattery: %d",b_per-b);
}