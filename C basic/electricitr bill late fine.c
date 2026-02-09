#include<stdio.h>
int main() {
    int type;
    printf("enter a type \n");
    scanf("%d",&type);
    switch (type>0) {
        case 1:{
            if (type<=5) {
                printf("%d",type*50);
            }
            else if (type<=10) {
                printf("%d",type*100);
            }
            else if (type>10) {
                printf("%d",type*200);
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