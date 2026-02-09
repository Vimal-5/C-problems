#include<stdio.h>
int main() {
    int marks,attendance;
    printf("enter a marks & attendance");
    scanf("%d %d",&marks,&attendance);
    if (attendance >=75) {
        if (marks>=75) {
            printf("Distinction");
        }
        else if (marks>=50 && marks<75) {
            printf("pass");
        }
        else {
            printf("fail");
        }
    }
    else {
        printf("fail");
    }
    return 0;
}