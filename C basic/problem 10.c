#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        for (int j=1;j<=a;j++) {
            if (i>=j) {
                printf("*");
            }
        }
        printf("\n");
    }
    for (int b=0;b<=a;b++) {
        for (int c=1;c<a-b;c++) {
           printf("*");
        }
        printf("\n");
    }
    return 0;
}