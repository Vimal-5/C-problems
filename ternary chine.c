#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    ((a==0)?printf("ZERO"):(a>0)?printf("POSITIVE"):printf("NAGATIVE"));
    return 0;
}