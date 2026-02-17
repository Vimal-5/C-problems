#include<stdio.h>
int main() {
    int size,max=0,s_max=0;
    scanf("%d",&size);
    for (int i=0;i<size;i++) {
        int arr[i];
        scanf("%d",&arr[i]);
        if (max<arr[i]) {
            s_max=max;
            max=arr[i];
        }
        if (s_max<arr[i]&&arr[i]<max) {
            s_max=arr[i];
        }
    }
    printf("%d",s_max);
    return 0;
}