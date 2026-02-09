#include<stdio.h>
int main() {
    int n,age;
    scanf("%d %d",&n,&age);
    switch (n) {
        case 1: {
            if (age<12) {
                printf("Fare 150");
            }
            else if (age>=60) {
                printf("Fare 200");
            }
            else {
                printf("Fare 300");
            }
            break;
        }
        case 2: {
            if (age<12) {
                printf("Fare 500");
            }
            else {
                printf("Fare 1000");
            }
            break;
        }
    }
    return 0;
}