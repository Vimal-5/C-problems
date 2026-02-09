#include<stdio.h>
int main() {
    int type,trips;
    printf("enter a type & trips \n");
    scanf("%d %d",&type,&trips);
    switch (type) {
        case 1: {
            if (trips>=1 && trips<=10){
                printf("Rs.%d",trips*800);
            }
            else if (trips>10 && trips<=30) {
                printf("Rs.%d",trips*800);
            }
            else if (trips==1) {
                printf("Rs.100");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        case 2: {
            printf("Rs.%d",trips*240);
            break;
        }
    }
    return 0;
}