#include<stdio.h>
int main() {
    int n,first=0,second=1,thired;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        printf("%d ",first);
        thired=first+second;
        first=second;
        second=thired;
    }
}