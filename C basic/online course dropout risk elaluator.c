#include<stdio.h>
int main() {
    int week,hour,count,status;
    scanf("%d",&week);
    int n=week;
    while (week>0) {
        scanf("%d",&hour);
        if (hour==0) {
            count++;
        }
        week--;
    }
    printf("Inactive weeks: %d\n",count);
    if (n%2<=count) {
        printf("Risk status: Low");
    }
    else {
        printf("Risk status: High");
    }
    return 0;
}