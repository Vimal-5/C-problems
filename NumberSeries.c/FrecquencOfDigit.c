#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);

    int freq[10] = {0};  // initialize all counts to 0

    while (num != 0) {
        freq[num % 10]++;   // increment count for last digit
        num = num / 10;     // remove last digit
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d - %d\n", i, freq[i]);
        }
    }

    return 0;
}
