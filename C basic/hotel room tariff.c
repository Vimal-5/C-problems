#include<stdio.h>
int main() {
    int type;
    char season;
    printf("enter a type & season");
    scanf("%d %c",&type,&season);
    switch (type) {
        case 1: {
            if (season=='a')
            {
                printf("Rs.2500");
            }
            else {
                printf("Rs.2000");
            }
            break;
        }
        case 2: {
            if (season=='c') {
                printf("Rs.4000");
            }
            else {
                printf("Rs.3000");
            }
            break;
        }
    }
    return 0;
}