#include<stdio.h>
int main() {
    int a,income;
    scanf("%d %d",&a,&income);
    if ((a>=85 && income<300000) && (a<=100 && income>0)) {
        printf("Eligible");
    }
    else if (a<85 || income>300000) {
        printf("Not eligible");
    }
    else {
        printf("Invalid Input");
    }
}