#include<stdio.h>
int main() {
    int n,over_time,count,a;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&over_time);
        if (over_time>=5) {
            count++;
        }
        a+=over_time;
        n--;
    }
    printf("Total overtime: %d\n",a);
    printf("Burnout time: %d",count);
    return 0;
}