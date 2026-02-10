#include<stdio.h>
int main() {
    int n,a=1;
    printf("enter a number:");
    scanf("%d",&n);
    for ( ; ; ) {
        n/=10;
        if (n!=0) {
            a++;
        }
        if (n==0) {
            break;
        }

    }
    printf("%d",a);
}