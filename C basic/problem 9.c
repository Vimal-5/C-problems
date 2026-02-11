#include<stdio.h>
int main() {
    int a,j=0;
    scanf("%d",&a);
    for (int e=1;e<=a;e++) {
        for (int c=1;c<=a-e;c++) {
            printf(" ");
        }
        for (int d=1;d<=2*e-1;d++) {
            printf("*");
        }
        printf("\n");
    }
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