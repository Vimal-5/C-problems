#include<stdio.h>
int palindrom(int n) {
    int a=n,b,c=0;
    while (n!=0) {
        b=n%10;
        n/=10;
        c=10*c+b;
    }
    return c;
}
int main() {
    int n;
    scanf("%d",&n);
    (palindrom(n)==n)?printf("Palindrom"):printf("Not Palindrom");
    return 0;
}