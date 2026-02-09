#include<stdio.h>
int main() {
    int type;
    char mode;
    printf("enter a type & mode \n");
    scanf("%d %c",&type,&mode);
    switch (type) {
        case 1: {
            if (mode=='r'){
                printf("Rs.5000");
            }
            else if (mode=='s') {
                printf("Rs.3000");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        case 2: {
            if (mode=='r') {
                printf("Rs.9000");
            }
            else if (mode=='s') {
                printf("Rs.7000");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
    }
    return 0;
}