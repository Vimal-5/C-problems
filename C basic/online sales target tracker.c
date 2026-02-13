#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        scanf("%d",&b);
        if (b>50000) {
            c++;
        }
        d=d+b;
    }
    printf("Total revenue: %d\n",d);
    printf("Critical days: %d",c);
    return 0;
}