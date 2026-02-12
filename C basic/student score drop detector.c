#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        scanf("%d",&b);
        if (b<40) {
            d++;
        }
        c=c+b;
    }
    printf("Average score: %d",c/a);
    printf("Faild subject: %d",d);
    return 0;
}