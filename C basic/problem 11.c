#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
            if (i%2==0) {
                for (int j=1;j<=i;j++) {
                    if (j%2==0) {
                        printf("1");
                    }
                    else {
                        printf("0");
                    }
                }
                printf("\n");
            }
            else {
                for (int b=1;b<=i;b++) {
                    if (b%2==0) {
                        printf("0");
                    }
                    else {
                        printf("1");
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
    }