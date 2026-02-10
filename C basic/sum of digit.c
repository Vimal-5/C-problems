#include<stdio.h>
int main() {
    int n,a=0;
    scanf("%d",&n);
    for ( ; ; ) {
        a=a+n%10;
        n/=10;
        if (n==0) {
            printf("%d",a);
            break;
        }
    }
}