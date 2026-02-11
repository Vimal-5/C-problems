#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        for (int j=a;a>=j;j--) {
            if (i<=j && j>0) {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}