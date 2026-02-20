#include<stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int orders[n],i;
    for (i=0;i<n;i++) {
        scanf("%d",&orders[i]);
        if (orders[i]>0) {
            for (int j=i; ; ) {
                orders[j]=orders[i];
                break;
            }
        }
        else {
            count++;
        }
    }
    for (int j=0;j<i;j++) {
        if (orders[j]>0){
            printf("%d ",orders[j]);
        }
    }
    for (int j=0;j<count;j++) {
        printf("0 ");
    }
    return 0;
}