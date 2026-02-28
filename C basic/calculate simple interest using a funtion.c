#include<stdio.h>
int interest(int p,int r,int t) {
    return (p*r*t)/100;
}
int main() {
    int principal,rate,time;
    scanf("%d %d %d",&principal,&rate,&time);
    printf("%d",interest(principal,rate,time));
    return 0;
}