#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    for (int i=1;i<=b;i++) {
        if (i%a==0) {
            c=c+i;
        }
    }
    printf("%d",c);
    return 0;
}
