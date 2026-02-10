#include<stdio.h>
int main() {
    int type,days;
    printf("enter a type & days \n");
    scanf("%d %d",&type,&days);
    switch (type) {
        case 1: {
            printf("%d",days*2);
            break;
        }
        case 2: {
            printf("%d",days*5);
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}