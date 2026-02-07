#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>0) {
        printf("Confirmed");
    }
    else if (a==0) {
        printf("Waiting list");
    }
    else {
        printf("Invalid Input");
    }
}