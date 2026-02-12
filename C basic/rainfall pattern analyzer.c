#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        scanf("%d",&b);
        if (b>50) {
            c++;
        }
        d=d+b;
    }
    printf("Total Rainfall: %d\n",d);
    printf("Heavy Rain Days: %d",c);
}