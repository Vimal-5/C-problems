#include<stdio.h>
int main() {
    int type,min;
    printf("enter a type & min \n");
    scanf("%d %d",&type,&min);
    switch (type) {
        case 1:{
            printf("%d",min*1);
            break;
        }
        case 2: {
           printf("%d",min*3);
            break;
        }
        case 3: {
            printf("%d",min*10);
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}