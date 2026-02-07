#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>100) {
        printf("Invalid Input");
    }
    else if (a>90 && a<=100) {
        printf("Grade A");
    }
    else if (a>70 && a<=90) {
        printf("Grade B");
    }
    else if (a>50 && a<=70) {
        printf("Grade C");
    }
    else {
        printf("Fail");
    }
    return 0;
}