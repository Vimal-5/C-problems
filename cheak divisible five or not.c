#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a%5==0) {
        printf("%d divisible by 5",a);
    }
    else {
        printf("no");
    }
    return 0;
}