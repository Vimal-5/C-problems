#include<stdio.h>
void sumofdigit(int a) {
    int sum;
    while (a!=0) {
        sum=sum+a%10;
        a=a/10;
    }
    printf("%d",sum);
}
int main() {
    int a;
    scanf("%d",&a);
    sumofdigit(a);
}