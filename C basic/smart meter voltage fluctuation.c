#include<stdio.h>
int main() {
    int a,b,c,min=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        scanf("%d",&b);
        if (b<210) {
            c++;
        }
        if (min>b||(min==0&&min!=b)) {
            min=b;
        }
    }
    printf("Minimum voltage: %d\n",min);
    printf("Low voltage events: %d",c);
    return 0;
}