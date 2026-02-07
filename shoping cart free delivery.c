#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>=499) {
        printf("Free delivary");
    }
    else if (a<499 && a>0) {
        printf("Delivery charges apply");
    }
    else {
        printf("Invalid Input");
    }
}