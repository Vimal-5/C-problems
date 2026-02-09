#include<stdio.h>
int main() {
    int type,time;
    printf("enter a type & time \n");
    scanf("%d %d",&type,&time);
    switch (type) {
        case 1: {
            if (time>=18 && time<=24){
                printf("ticket price 200");
            }
            else {
                printf("ticket price 150");
            }
            break;
        }
        case 2: {
            if (time>=18 && time<=24) {
                printf("ticket price 300");
            }
            else {
                printf("ticket price 250");
            }
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}