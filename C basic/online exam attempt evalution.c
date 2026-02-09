#include<stdio.h>
int main() {
    int num_attem,marks;
    printf("enter a num_attem & marks \n");
    scanf("%d %d",&num_attem,&marks);
    switch (num_attem) {
        case 1: {
            if (marks>=80){
                printf("Excellent");
            }
            else {
                printf("Not qualified");
            }
            break;
        }
        case 2: {
            if (marks>=60) {
                printf("Good");
            }
            else {
                printf("Invalid Input");
            }
            break;
        }
        case 3: {
            printf("Need Improvement");
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}