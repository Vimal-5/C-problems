#include<stdio.h>
int main() {

    int size;
    printf("Enter the loop size: ");
    scanf("%d",&size);

    int sum =0;
    for (int i=1 ; i<=size ; i++) {
        sum += i;
    }
    printf("Sum of all numbers is: %d",sum);
    return 0;
}