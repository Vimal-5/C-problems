#include<stdio.h>
int main() {
    int a,b=69,c=b;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        for (int j=1;j<=i;j++) {
            printf("%c",(char)(b));
            b++;
        }
        printf("\n");
        b=c-i;
    }
}