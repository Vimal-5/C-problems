#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type) {
        case 1: {
            printf("Consulation fee 500");
            break;
        }
        case 2: {
            printf("Specialist fee 1200");
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}