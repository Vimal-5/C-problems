#include<stdio.h>
int main() {
    int n,x,count=0;
    scanf("%d %d",&n,&x);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if (arr[i]==x) {
            count++;
        }
    }
    printf("%d",count);
}