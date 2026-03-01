#include<stdio.h>
void area(int a) {
    printf("%.2f",3.14*a*a);
}
int main() {
    int a;
    scanf("%d",&a);
    area(a);
    return 0;
}