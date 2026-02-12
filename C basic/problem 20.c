#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a-1;i++) {
        int d=i;
        for (int j=1;j<=i;j++) {
            if (i!=a) {
                printf("*");
            }
        }
        for (int k=1;k<=a*2-2*i;k++) {
            printf(" ");
        }
        for (int c=1;c<=i;c++) {
            if (d<=i && i!=a){
                printf("*");
            }
        }
        printf("\n");
    }
    for (int i=1;i<=a;i++) {
        int d=i;
        for (int j=0;j<=a-i;j++) {
            printf("*");
        }
        for (int b=1;b<2*i-1;b++) {
            printf(" ");
        }
        for (int c=a;c>=i;c--) {
            if (d>=i){
                printf("*");
            }
        }
        printf("\n");
    }
}