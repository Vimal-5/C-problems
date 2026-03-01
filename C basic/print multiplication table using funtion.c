#include<stdio.h>
void tables(int n) {
    for (int i=1;i<=10;i++) {
        printf("%d",i);
        printf("*%d",n);
        printf("=%d\n",i*n);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    tables(n);
    return 0;
}