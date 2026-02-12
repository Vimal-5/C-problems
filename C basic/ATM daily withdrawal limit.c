#include<stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        scanf("%d",&a);
        a=a+a;
    }
    if (a<=10000) {
        printf("Approved");
    }
    else {
        printf("Limit exceeded");
    }
    return 0;
}