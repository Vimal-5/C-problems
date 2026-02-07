#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>40 && a<=100) {
        printf("Pass");
    }
    else if (a<40) {
        printf("Fail");
    }
    else {
        printf("Invalid Input");
    }
}