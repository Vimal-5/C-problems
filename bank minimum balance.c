#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a<500 && a>0) {
        printf("Low Balance");
    }
    else if (a>=500 && a!=a<0) {
        printf("Sufficient Balance");
    }
    else {
        printf("Invalid Input");
    }
}