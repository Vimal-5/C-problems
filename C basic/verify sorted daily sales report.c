#include<stdio.h>
int main() {
    int n,count=0,a=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=n;i>0;i--) {
        scanf("%d",&arr[i]);
        if (arr[i]>a) {
            count++;
            a=arr[i];
        }
    }
    (count==n)?printf("Yes"):printf("No");
}