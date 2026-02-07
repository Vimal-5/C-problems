#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>=90) {
        printf("Speed Limit Exceeded");
    }
    else if (a<90 && a>0) {
        printf(" Within Speed Limit");
    }
    else {
        printf("Invalid Input");
    }
}