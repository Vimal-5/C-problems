#include<stdio.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=k;i>0;i--) {
        prontf("%d",arr[i]);
    }
}