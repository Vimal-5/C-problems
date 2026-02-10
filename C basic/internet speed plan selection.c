#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type) {
        case 1: {
            printf("40 Mbps");
            break;
        }
        case 2: {
            printf("100 Mbps");
            break;
        }
        case 3: {
            printf("300 Mbps");
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}