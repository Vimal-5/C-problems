#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    while (a>0) {
        scanf("%d",&c);
        if (b<2000) {
            d++;
        }
        b=b+c;
        a--;
    }
    printf("Final balance: %d\n",b);
    printf("Low balance days: %d",d);
    return 0;
}