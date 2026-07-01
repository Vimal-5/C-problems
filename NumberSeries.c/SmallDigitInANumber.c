#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int small = num % 10;
    num = num / 10;
    while (num != 0) {
        if (small > num % 10) {
            small = num % 10;
        }
        num = num / 10;
    }
    printf("Largest num: %d",small);
}