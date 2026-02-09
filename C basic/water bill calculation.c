#include<stdio.h>
int main() {
    int type,unit;
    printf("enter a type & unit \n");
    scanf("%d %d",&type,&unit);
    switch (type) {
        case 1: {
            if (unit<=30 && unit>0){
                printf("%d",5*unit);
            }
            else if (unit>30) {
                printf("%d",8*unit);
            }
            else {
                printf("Invalid input");
            }
            break;
        }
        case 2: {
            if (unit>0) {
                printf("%d",10*unit);
            }
            else {
                printf("Invalid input");
            }
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}