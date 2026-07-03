#include<stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d",&num1 ,&num2);
    int power = 1;
    for (int i=0 ; i< num2 ; i++) {
        power = power * num1;
    }
    printf("%d",power);
}