#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int count = 0;
    while (num != 0) {
        if ((num % 10) % 2 != 0) {
            count++;
        }
        num = num / 10;
    }
    printf("%d" , count);
    return 0;
}