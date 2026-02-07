#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("enter the operator (+)-1,(-)-2,(*)-3,(/)-4,(%)-5");
    scanf("%d",&c);
    switch (c) {
        case 1: {
            printf("%d",a+b);
            break;
        }
        case 2: {
            printf("%d",a-b);
            break;
        }
        case 3: {
            printf("%d",a*b);
            break;
        }
        case 4: {
            printf("%d",a/b);
            break;
        }
        case 5: {
            printf("%d",a%b);
            break;
        }
       default:{
            printf("Invalid Input");
       }
    }
    return 0;
}