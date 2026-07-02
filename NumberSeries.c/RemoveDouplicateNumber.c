#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int freq[10] = {0};

    while (num >= 0) {
        freq[num % 10]++;
        num = num / 10;
    }
    for (int i=0 ; i<10 ; i++) {
        if (freq[i]>0) {
            printf("%d",i);
        }
    }
    return 0;
}