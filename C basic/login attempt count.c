#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>3) {
        printf("Account Locked");
    }
    else if (a<=3 && a>=0) {
        printf("Login Allowed");
    }
    else {
        printf("Invalid Input");
    }
}