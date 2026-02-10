#include<stdio.h>
int main() {
    int n;
    int a=0;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        if (i%2==0) {
            a+=i;
        }
    }
    printf("%d ",a);
}