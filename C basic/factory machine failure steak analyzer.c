#include<stdio.h>
int main() {
    int n,streak,a,l_streak=0;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&streak);
        if (streak==0) {
            a++;
        }
        else if (streak==1) {
            a=0;
        }
        if (l_streak<=a) {
            l_streak=a;
        }
        n--;
    }
    printf("Longest failure streak: %d",l_streak);
}