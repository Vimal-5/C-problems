#include<stdio.h>
int main() {
    int type;
    float used_data;
    printf("enter a type & used_data \n");
    scanf("%d %f",&type,&used_data);
    switch (type) {
        case 1: {
            if (used_data>1)
            {
                printf("Speed Reduced");
            }
            else {
                printf("Normal speed");
            }
            break;
        }
        case 2: {
            if (used_data>2) {
                printf("Extra charges applied");
            }
            else {
                printf("Normal speed");
            }
            break;
        }
    }
    return 0;
}