#include<stdio.h>
int main() {
    int type,liter;
    printf("enter a type & liter \n");
    scanf("%d %d",&type,&liter);
    switch (type) {
        case 1: {
            printf("%d",liter*105);
            break;
        }
        case 2: {
            printf("%d",liter*92);
            break;
        }
        case 3: {
            printf("%d",liter*85);
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}