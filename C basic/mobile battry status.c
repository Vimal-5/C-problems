#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a<20 && a>0) {
        printf("needs charging");
    }
    else if (a>=20 && a<=100) {
        printf("Battery ok");
    }
    else {
        printf("Invalid Input");
    }
}