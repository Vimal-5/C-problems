#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a<12 && a>0) {
        printf("Discount ticket");
    }
    else if (a>=12) {
        printf("Regular ticket");
    }
    else {
        printf("Invalid Input");
    }
}