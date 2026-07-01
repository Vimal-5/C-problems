#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int sum = 0;
    while (num != 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("Largest num: %d",sum);
}