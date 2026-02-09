#include<stdio.h>
int main() {
    int hour;
    printf("enter a hour \n");
    scanf("%d",&hour);
    switch (hour>=0) {
        case 1:{
            if (hour<=1 && hour>0)
            {
                printf("Short interruption");
            }
            else if (hour<=4) {
                printf("Medium interruption");
            }
            else if (hour>4) {
                printf("Long interruption");
            }
            else {
                printf("invalid input");
            }
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}