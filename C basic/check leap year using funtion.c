#include<stdio.h>
int leapyear(int year) {
    if (year%4==0 && year%100!=0) {
        return 1;
    }
    else if (year%400==0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int year;
    scanf("%d",&year);
    (leapyear(year)==1)?printf("Leap Year"):printf("Not Leap Year");
    return 0;
}