#include<stdio.h>
int main() {
    int type,score;
    printf("enter a type & score \n");
    scanf("%d %d",&type,&score);
    switch (type) {
        case 1: {
            if (score>=700){
                printf("Approved");
            }
            else if (score>=650 && score<=699) {
                printf("Manual review");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        case 2: {
            if (score>=700) {
                printf("Approved");
            }
            else if (score<700) {
                printf("Rejection");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
    }
    return 0;
}