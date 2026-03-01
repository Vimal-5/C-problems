#include<stdio.h>
int factorial(int n) {
    int sum=1;
    for (int i=1;i<=n;i++) {
        sum*=i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
}