#include<stdio.h>
int main() {
    int a,b=0;
    scanf("%d",&a);
    for (int i=2;i<=a;i++) {
        int c=1;
        for (int j=2;j<i;j++) {
            if (i%j==0) {
                c=0;
                break;
            }
        }
        if (c==1) {
            b++;
        }
    }
    printf("%d",b);
    return 0;
}