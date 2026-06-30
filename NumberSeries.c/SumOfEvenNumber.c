#include<stdio.h>
int main() {

    int size;
    printf("Enter the loop size: ");
    scanf("%d",&size);

    int sum = 0;
    for (int i=1 ; i<=size ; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("Sum of even number is: %d",sum);
    return 0;
}