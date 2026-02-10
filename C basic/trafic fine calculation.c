#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type) {
        case 1: {
            printf("1000");
            break;
        }
        case 2: {
            printf("1500");
            break;
        }
            case 3: {
            printf("2000");
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}