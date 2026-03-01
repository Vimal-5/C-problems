#include<stdio.h>
int perfectnumber(int n) {
    int a=0;
    int i=1;
    while (n!=i) {
        if (n%i==0) {
            a+=i;
        }
        i++;
    }
    return a;
}
int main() {
    int n;
    scanf("%d",&n);
    (perfectnumber(n)==n)?printf("Perfect number"):printf("Not perfect number");
    return 0;
}