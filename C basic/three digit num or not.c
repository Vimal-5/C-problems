#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a<=999 && a>=100) {
        printf("three digit number");
    }
    else {
        printf("no");
    }
    return 0;
}