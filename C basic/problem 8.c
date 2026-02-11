#include<stdio.h>
int main() {
    int a,j=0;
    scanf("%d",&a);
    for (int i=0;i<a;i++) {
        for (j=0;j<i;j++) {
            printf(" ");
        }
        for (int b=1;b<=2*a-2*i-1;b++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}