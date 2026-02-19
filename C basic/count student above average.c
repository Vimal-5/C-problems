#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int marks[n],avg,sum;
    for (int i=0;i<n;i++) {
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    avg=sum/n;
    int count=0;
    for (int i=0;i<n;i++) {
        if (marks[i]>avg) {
            count++;
        }
    }
    printf("%d",count);
}