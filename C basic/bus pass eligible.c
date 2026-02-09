#include<stdio.h>
int main() {
    int type,distance;
    printf("enter a type & distance \n");
    scanf("%d %d",&type,&distance);
    switch (type) {
        case 1: {
            if (distance>30 && distance<=100){
                printf("Eligible with extra fee");
            }
            else if (distance<=30 && distance>0) {
                printf("Eligible");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        case 2: {
            if (distance<=30 && distance>0) {
                printf("Eligible");
            }
            else if (distance>30 && distance<=100) {
                printf("Not eligible");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}