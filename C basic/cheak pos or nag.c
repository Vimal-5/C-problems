#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>0) {
        printf("POSITIVE");
    }
    else if (a<0) {
        printf("NAGATIVE");
    }
    else {
        printf("ZERO");
    }
    return 0;
}