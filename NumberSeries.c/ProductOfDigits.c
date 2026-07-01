#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int sum = 1, digit = 0;
    while (num != 0) {
        digit = num % 10;
        sum = sum * digit;
        num = num / 10;
    }
    printf("%d",sum);
}