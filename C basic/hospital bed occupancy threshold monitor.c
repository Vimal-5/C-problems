#include<stdio.h>
int main() {
    int capacity,n,a,b,d;
    scanf("%d %d",&capacity,&n);
    int c=n;
    while (n>0) {
        scanf("%d",&a);
        if (((c/capacity)*100)>=b) {
            d++;
        }
        b+=a;
        n--;
    }
    printf("Final occupied beds: %d\n",b);
    printf("Critical hours: %d",d);
}