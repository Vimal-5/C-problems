#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d",&a);
    int i=1;
    while(i<=a) {
        scanf("%d",&b);
        if (b>70) {
            c++;
        }
        else {
            d++;
        }
        i++;
    }
    printf("Noice violations: %d\n",c);
    printf("Lngest violation steark: %d",d);
    return 0;
}