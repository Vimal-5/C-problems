#include<stdio.h>
int main() {
    int n,d_hours,t_delay,count;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&d_hours);
        if (d_hours>2) {
            count++;
        }
        t_delay+=d_hours;
        n--;
    }
    printf("Total delay: %d\n",t_delay);
    printf("Delay days: %d",count);
    return 0;
}