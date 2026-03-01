#include<stdio.h>
int reverse(int n) {
    int a,digit=0;
    while (n!=0) {
        a=n%10;
        digit=10*digit+a;
        n/=10;
    }
    return digit;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",reverse(n));
    return 0;
}