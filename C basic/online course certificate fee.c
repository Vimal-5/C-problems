#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type) {
        case 1: {
            printf("Certificate fee 0");
            break;
        }
        case 2: {
            printf("Certificate fee 500");
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}