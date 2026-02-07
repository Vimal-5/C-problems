#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>=75 && a<=100) {
        printf("Eligible for Exam");
    }
    else if (a<75 && a>0) {
        printf("Not Eligible");
    }
    else {
        printf("Invalid Input");
    }
}