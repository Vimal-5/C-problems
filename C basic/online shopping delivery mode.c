#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type>0) {
        case 1:{
            printf("40");
            break;
        }
            case 2: {
            printf("120");
        }
            case 3: {
            printf("0");
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}