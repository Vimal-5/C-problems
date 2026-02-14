#include<stdio.h>
int main() {
    int n,borrow,a,l_borrow=0;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&borrow);
        if (borrow==0) {
            a++;
        }
        else if (borrow==1) {
            a=0;
        }
        if (l_borrow<=a) {
            l_borrow=a;
        }
        n--;
    }
    printf("Longest failure streak: %d",l_borrow);
}