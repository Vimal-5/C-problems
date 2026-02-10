#include<stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            a=a+i;
            if (a==n) {
                printf("Yes");
            }
        }
    }
    return 0;
}
