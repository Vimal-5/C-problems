#include<stdio.h>
int main() {
    int n,p_usage,count,max=0;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&p_usage);
        if (p_usage>5) {
            count++;
        }
        if (max<p_usage) {
            max=p_usage;
        }
        n--;
    }
    printf("Max usage: %d\n",max);
    printf("Surge hours: %d",count);
    return 0;
}