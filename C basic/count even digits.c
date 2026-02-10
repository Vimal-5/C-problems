#include<stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    for ( ; ; ) {
        int a=n%10;
        n=n/10;
        if (a%2==0) {
            b++;
        }
        else if (n==0) {
            printf("Output:%d",b);
            break;
        }
    }


}
