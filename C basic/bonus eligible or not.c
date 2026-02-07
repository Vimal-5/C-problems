#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>30000) {
        printf("Bonus Eligible");
    }
    else {
        printf("NotEligible");
    }
}