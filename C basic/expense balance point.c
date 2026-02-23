#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int expenses[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&expenses[i]);
    }
    int a,left=0,right=0;;
    if (n%2==0) {
        a=n/2;
    }
    else {
        a=(n-1)/2;
    }
    if (a<=0) {
        printf("0");
    }
    else {
        for (int i=0;i<a;i++) {
            left+=expenses[i];
        }
        for (int i=a;i<n;i++) {
            right+=expenses[i];
        }
    }
    if (left!=0&&right!=0) {
        if (left==right) {
            printf("%d",a);
        }
    }
    else {
        printf("-1");
    }
    return 0;
}