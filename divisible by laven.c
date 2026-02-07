#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a%11==0) {
        printf("Divisible");
    }
    else {
        printf("not divisible");
    }
    return 0;
}