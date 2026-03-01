#include<stdio.h>
int power(int a,int b) {
    int c;
    for (int i=1;i<b;i++) {
        c=c+a*a;
    }
    return c;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}