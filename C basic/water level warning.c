#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>90 && a<=100) {
        printf("Over flow Warning");
    }
    else if (a<=90 && a>0) {
        printf("Safe Level");
    }
    else {
        printf("Invalid Input");
    }
}