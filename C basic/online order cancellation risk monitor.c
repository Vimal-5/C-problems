#include<stdio.h>
int main() {
    int n,outcome,count=0,b;
    scanf("%d",&n);
    int a=n;
    while (n>0) {
        scanf("%d",&outcome);
        if (outcome==1) {
            count=count+1;
        }
        n--;
    }
    printf("Successful: %d\n",count);
    printf("Cancelled: %d\n",a-count);
    b=a/2;
    printf("%d",b);
    if (b<=count) {
        printf("Status: Safe");
    }
    else {
        printf("Status: Risk");
    }
    return 0;
}