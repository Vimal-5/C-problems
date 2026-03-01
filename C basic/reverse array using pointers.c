#include<stdio.h>
void reversearray(int *a,int size) {
    for (int i=size;i>0;i--) {
        printf("%d ",a[i]);
    }
}
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=1;i<=size;i++) {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    reversearray(p,size);
    return 0;
}