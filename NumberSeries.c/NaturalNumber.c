#include<stdio.h>
int main() {

    int size;
    printf("Enter the loop size: ");
    scanf("%d",&size);

    for (int i=1 ; i<=size ; i++) {
        printf("%d",i);
        printf("\n");
    }
    return 0;
}