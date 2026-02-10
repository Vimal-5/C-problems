#include<stdio.h>
int main() {
    int n,a;
    printf("enter a number:");
    scanf("%d",&n);
    for ( ; ; ) {
        a=n%10;
        printf("%d",a);
        n/=10;

        if (n==0) {
            break;
        }
    }
}