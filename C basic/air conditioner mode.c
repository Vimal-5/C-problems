#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>0 && a<=20) {
        printf("Heating mode");
    }
    else if (a<=25 && a>21) {
        printf("Normal mode");
    }
    else if (a<=50 && a>26) {
        printf("Cooling mode");
    }
    else {
        printf("Invalid Input");
    }
}