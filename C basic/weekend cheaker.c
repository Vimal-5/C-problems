#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a==6 || a==7) {
        printf("Weekend");
    }
    else if (a<=5 && a>0) {
        printf("Weekday");
    }
    else {
        printf("Invalid Input");
    }
}