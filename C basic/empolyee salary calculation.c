#include<stdio.h>
int main() {
    int type,experience;
    printf("enter a type & experience\n");
    scanf("%d %d",&type,&experience);
    switch (type) {
        case 1: {
            if (experience>=3)
            {
                int a=5000*experience;
                printf("Rs.%d",50000+a);
            }
            else {
                printf("Rs.50000");
            }
            break;
        }
        case 2: {
            if (experience>=3) {
                int b=5000*experience;
                printf("Rs.%d",35000+b);
            }
            else {
                printf("Rs.35000");
            }
            break;
        }
    }
    return 0;
}