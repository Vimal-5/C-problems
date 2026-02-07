#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a%4==0 && a%100!=0 || a%400==0) {
        printf("%d is leep",a);
    }
    else {
        printf("%d is not leep",a);
    }
    return 0;
}