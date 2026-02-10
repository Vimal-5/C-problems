#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type) {
        case 1: {
            printf("Upgrade fee 300");
            break;
        }
        case 2: {
            printf("Upgrade fee 800");
            break;
        }
        case 3: {
            printf("Upgrade fee 1500");
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}