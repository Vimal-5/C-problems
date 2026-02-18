#include<stdio.h>
int main() {
    int n,work_count=0,holy_count=0;
    scanf("%d",&n);
    int days[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&days[i]);
        if (days[i]%2==0) {
            work_count++;
        }
        else {
            holy_count++;
        }
    }
    printf("Even: %d\n",work_count);
    printf("Odd: %d",holy_count);
}