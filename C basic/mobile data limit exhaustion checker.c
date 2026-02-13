#include <stdio.h>
int main() {
    int a,b,c,d=0;
    scanf("%d %d",&a,&b);
    while (b>0&&a>0) {
        scanf("%d",&c);
        a=a-c;
        d++;
        b--;
    }
    printf("Days used: %d\n",d);
    printf("Remaining data: %dGB",a);
    return 0;
}