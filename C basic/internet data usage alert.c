#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        scanf("%d",&b);
        if (b>2) {
            c++;
        }
        d=d+b;
    }
    printf("Total data: %d\n",d);
    printf("High usage days: %d",c);
    return 0;
}