#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type) {
        case 1: {
                printf("Under warranty");
            break;
        }
        case 2:{
                    printf("Limited warranty");
            break;
        }
        case 3:{
                printf("Out of warranty");
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}