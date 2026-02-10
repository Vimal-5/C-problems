#include<stdio.h>
int main() {
    int n,p;
    printf("enter a numbers \n");
    scanf("%d %d",&n,&p);
    int a=n;
    for (int i=1;i<p;i++) {
        n=n*a;
    }
    printf("%d",n);
    return 0;
}