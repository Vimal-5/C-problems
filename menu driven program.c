#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter the values:");
    scanf("%d %d",&a,&b);
    printf("1-(+),2-(-),3-(*),4-(/),5-(%)");
    printf("enter the operator:");
    scanf("%d",&c);
    switch (c) {
        case 1: {
            printf("Sum=%d",a+b);
            break;
        }
        case 2: {
            printf("Sub=%d",a-b);
            break;
        }
        case 3: {
            printf("Pro=%d",a*b);
            break;
        }
        case 4: {
            printf("Div=%d",a/b);
            break;
        }
        case 5: {
            printf("Mod=%d",a%b);
            break;
        }
        default: {
            printf("Invalid Input");
        }
    }
    return 0;
}