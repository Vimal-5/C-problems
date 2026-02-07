#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a%100==0 && a>500) {
        printf("Valid amount");
    }
    else {
        printf("Invalid amount");
    }
}