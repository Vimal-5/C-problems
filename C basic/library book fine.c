#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>7) {
        printf("Fine applied");
    }
    else if (a<=7 && a>0) {
        printf("No fine");
    }
    else {
        printf("Invalid Input");
    }
}