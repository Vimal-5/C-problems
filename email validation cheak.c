#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>5) {
        printf("Valid email");
    }
    else if (a<=5) {
        printf("Invalid email");
    }
    else {
        printf("nagative");
    }
}