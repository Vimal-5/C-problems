#include<stdio.h>
int main() {
    int type,weight;
    printf("enter a type & weight \n");
    scanf("%d %d",&type,&weight);
    switch (type) {
        case 1: {
            if (weight>0){
                printf("Rs.%d",weight*300);
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        case 2: {
            if (weight<=3 && weight>0) {
                printf("Free");
            }
            else if (weight>3) {
                printf("Rs.%d",weight*300);
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
    }
    return 0;
}