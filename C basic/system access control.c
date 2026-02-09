#include<stdio.h>
int main() {
    int type,time;
    printf("enter a type & time \n");
    scanf("%d %d",&type,&time);
    switch (type) {
        case 1: {
            if (time<=24 && time>0){
                printf("Full access");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        case 2: {
            if (time<=20 && time>=9) {
                printf("Limited access");
            }
            else {
                printf("Access denied");
            }
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}