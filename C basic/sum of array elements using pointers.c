#include<stdio.h>
void sumofarray(int *a,int size) {
    int sum=0;
    for (int i=1;i<=size;i++) {
        sum+=a[i];
    }
    printf("%d",sum);
}
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=1;i<=size;i++) {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    sumofarray(p,size);
    return 0;
}