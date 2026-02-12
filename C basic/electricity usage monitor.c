#include<stdio.h>
int main() {
    int n,a,b;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        scanf("%d",&a);
        b=b+a;
    }
    printf("%d",b);
    return 0;
}