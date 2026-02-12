#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        scanf("%d",&b);
        if (b>100) {
            c++;
        }
        d=d+b;
    }
    printf("Total patients: %d\n",d);
    printf("Overcrowded: %d",c);
    return 0;
}