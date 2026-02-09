#include<stdio.h>
int main() {
    int n,units;
    printf("enter yur connection type:");
    printf("1 - Domestic connection");
    printf("2 - Commercial connection");
    scanf("%d",&n);
    printf("enter a units:");
    scanf("%d",&units);
    switch (n) {
        case 1: {
            if (units<100) {
                int a=units*3;
                printf("Bill %d",a);
            }
            else {
                int b=units-100;
                int c=100;
                b=b*5;
                c=c*3;
                printf("%d",b+c-80);
            }
            break;
        }
        case 2: {
            int d=units-100;
            int e=100;
            d=d*10;
            e=e*7;
            printf("%d",e+d);
            break;
        }
        default:
            printf("Invalid Input");
    }
    return 0;
}