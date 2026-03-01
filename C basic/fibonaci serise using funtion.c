#include<stdio.h>
void fibonaci(int n) {
    int first=0,second=1,next;
    for (int i=1;i<=n;i++) {
        if (i<=1) {
            next=1;
        }
        else {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d\n",next);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    fibonaci(n);
    return 0;
}