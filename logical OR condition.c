#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a<0 || a>50) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}