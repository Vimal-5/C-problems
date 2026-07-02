#include<stdio.h>
#include<math.h>
int main() {
    int num;
    scanf("%d",&num);
    int count = 0, temp = num, temp2 = num;
    while (num != 0) {
        count++;
        num = num / 10;
    }

    int sum = 0;
    while (temp != 0) {
        sum = sum + pow(temp % 10 , count);
        temp  = temp / 10;
    }

    if (temp2 == sum) {
        printf("Amstrong Number");
    }
    else {
        printf("Not Amstrong Number");
    }
}