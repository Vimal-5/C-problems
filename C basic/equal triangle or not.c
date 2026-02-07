#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c && a==c) {
        printf("All sides equal triangle");
    }
    else if (a==b || b==c || c==a) {
        printf("Two sides equal triangle");
    }
    else {
        printf("Three different  sides triangle");
    }
    return 0;
}