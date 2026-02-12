#include<stdio.h>
int main() {
    int n,a,b=0,c;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        scanf("%d",&a);
        if (a>1000) {
            b=b+1;
        }
        c=c+a;
    }
    printf("%d",a);
    printf("\n %d",b);
    return 0;
}