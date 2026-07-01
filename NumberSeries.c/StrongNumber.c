#include<stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i=1 ; i<=n ; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int num;
    scanf("%d",&num);
    int sum = 0, temp = num;
    while (num != 0) {
        sum = sum + factorial(num % 10);
        num = num / 10;
    }

    if (temp == sum) {
        printf("Strong Number");
    }
    else {
        printf("Not a Strong Number");
    }
}