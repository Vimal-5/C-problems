#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int count = 0;
    if (num == 1 || num == 2) {
        printf("Prime");
        count++;
    }
    for (int i=2 ; i<num/2 ; i++) {
        if (num % i == 0) {
            printf("Not Prime");
            count++;
            break;
        }
    }
    if (count == 0) {
        printf("Prime");
    }
    return 0;
}