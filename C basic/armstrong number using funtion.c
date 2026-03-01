#include<stdio.h>
#include<math.h>
int armstrong(int n) {
    int a,count=0,b,d=n;
    while (n!=0) {
        a=n%10;
        n/=10;
        count++;
    }
    for (int i=1;d!=0;i++) {
        a=d%10;
        b+=pow(a,count);
        d/=10;
    }
    return b;
}
int main() {
    int n;
    scanf("%d",&n);
    (armstrong(n)==n)?printf("Armstrong"):printf("Not armstrong");
    return 0;
}