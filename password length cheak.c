#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>=8) {
        printf("String password");
    }
    else if (a<8 && a>0) {
        printf("Weak password");
    }
    else {
        printf("Invalid Input");
    }
}