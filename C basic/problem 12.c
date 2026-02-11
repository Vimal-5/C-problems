#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        int d=i;
        for (int j=1;j<=i;j++) {
            printf("%d",j);
        }
        for (int k=1;k<=a*2-2*i;k++) {
            printf(" ");
        }
        for (int c=1;c<=i;c++) {
            if (d<=i){
                printf("%d",d);
                d--;
            }
        }
        printf("\n");
    }
}