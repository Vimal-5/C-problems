#include<stdio.h>
int main() {
    int a=5;
    int b=++a;
    int c=a--;
    printf("%d ",c);
    printf("%d ",b);
    printf("%d",a);
    return 0;
}