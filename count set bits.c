#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    for ( ;a!=0; ) {
        b=a%2;
        a=a/2;
        if (b==1) {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}