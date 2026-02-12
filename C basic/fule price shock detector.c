#include<stdio.h>
int main() {
    int a,b,c,max=1;

    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        scanf("%d",&b);
        if (b>100) {
            c++;
        }

        if (max<b) {
            max=b;
        }
    }
    printf("Highest price: %d\n",max);
    printf("High price days: %d",c);
    return 0;
}