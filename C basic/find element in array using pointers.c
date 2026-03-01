#include<stdio.h>
void find(int *a,int size,int target) {
    int b=0;
    for (int i=0;i<size;i++) {
        if (a[i]==target) {
            b++;
            printf("%d",i);
            break;
        }
    }
    if (b==0) {
        printf("-1");
    }
}
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int *p=arr;
    find(p,size,target);
    return 0;
}