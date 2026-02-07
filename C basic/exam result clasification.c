#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>=85 && a<=100) {
        printf("Distinction");
    }
    else if (a<85 && a>=55) {
        printf("pass");
    }
    else if (a<55 && a>=0) {
        printf("fail");
    }
    else {
        printf("Invalid Input");
    }
}