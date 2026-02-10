#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type) {
        case 1: {
                printf("Transport fee 800");
            break;
        }
        case 2:{
                    printf("Transport fee 1200");
            break;
        }
        case 3:{
                printf("Transport fee 1800");
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}