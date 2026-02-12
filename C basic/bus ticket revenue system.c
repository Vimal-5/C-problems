#include<stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        scanf("%d",&b);
        b=b+b;
    }
    printf("%d",b);
    return 0;
}