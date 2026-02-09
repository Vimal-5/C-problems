#include<stdio.h>
int main() {
    int type,hour;
    printf("enter a type & hour \n");
    scanf("%d %d",&type,&hour);
    switch (type) {
        case 1: {
            if (hour>0 && hour<=24){
                printf("Rs.%d",hour*10);
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        case 2: {
            if (hour>0 && hour<=24) {
                printf("Rs.%d",hour*20);
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        default: {
            printf("Rs.%d",hour*20);
        }
    }
    return 0;
}