#include<stdio.h>
int main() {
    int n,target,i,j=0,count=0;
    int prices[n];
    scanf("%d %d",&n,&target);
    for (i=0;i<n;i++) {
        scanf("%d",&prices[i]);
    }
    for (i=0;i<n;i++) {
        prices[j]=prices[i];
        j++;
        printf("%d ",prices[j]);
    }
    // for (i=0;i<n;i++) {
    //     for (j=0;j<n;j++) {
    //         if ((prices[i]+prices[j])==target) {
    //             printf("%d %d",i,j);
    //             count++;
    //             break;
    //         }
    //     }
    // }
    // if (count==0) {
    //     printf("No pair");
    // }
    return 0;
}