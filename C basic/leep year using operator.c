#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a%4==0 && a%400==0) {
        printf("leep");
    }
    else {
        printf("not leep");
    }
    return 0;
}