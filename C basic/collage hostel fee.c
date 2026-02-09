#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type>0) {
        case 1:{
            printf("80000");
            break;
        }
            case 2: {
            printf("60000");
        }
            case 3: {
            printf("45000");
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}