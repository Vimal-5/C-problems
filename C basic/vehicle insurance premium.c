#include<stdio.h>
int main() {
    int type,age;
    printf("enter a type & age \n");
    scanf("%d %d",&type,&age);
    switch (type) {
        case 1: {
            if (age<=5 && age>0){
                printf("Rs.1500");
            }
            else if (age>5) {
                printf("Rs.2500");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        case 2: {
            if (age<=5) {
                printf("Rs.4000");
            }
            else if (age>5) {
                printf("Rs.6000");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
    }
    return 0;
}