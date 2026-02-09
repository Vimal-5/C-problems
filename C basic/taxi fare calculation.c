#include<stdio.h>
int main() {
    int type,distance;
    printf("enter a type & distance \n");
    scanf("%d %d",&type,&distance);
    switch (type>0) {
        case 1:{
            printf("%d",distance*10);
            break;
        }
            case 2: {
            printf("%d",distance*15);
        }
            case 3: {
            printf("%d",20);
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}