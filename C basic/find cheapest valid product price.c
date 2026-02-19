#include<stdio.h>
int main() {
    int n,min;
    scanf("%d",&n);
    int price[n],i;
    for (i=0;i<n;i++) {
        scanf("%d",&price[i]);

    }
    int count=0;
    for (i=0;i<n;i++) {
        if (price[i]>0) {
            if (price[i]<min) {
                min=price[i];
                count++;
            }
        }
    }
    (count==0)?printf("No positive"):printf("%d",min);
    return 0;
}