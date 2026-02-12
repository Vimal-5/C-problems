#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d",&a);
    for (int i=0;i<=a;i++) {
        scanf("%d",&b);
        if (b>50) {
            c++;
        }
        d=d+b;
    }
    printf("Total errors: %d\n",d);
    printf("Critical hours: %d",c);
    return 0;
}