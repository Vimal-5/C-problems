#include<stdio.h>
int main() {
    int n,year;
    printf("enter a type & ayear");
    scanf("%d %d",&n,&year);
    switch (n) {
        case 1: {
            printf("Interst 4%");
            break;
        }
        case 2: {
            if (year<=3) {
                printf("Interst 5%");
            }
            else {
                printf("Interst 7%");
            }
            break;
        }
    }
    return 0;
}