#include<stdio.h>
int main() {
    int max_weight,n,passenger_weight,b,a;
    scanf("%d %d",&max_weight,&n);
    while (n>0) {
        scanf("%d",&passenger_weight);
        a=a+passenger_weight;
        if (a<=max_weight) {
            b++;
        }
        n--;
    }
    printf("Passengers allowed: %d\n",b);
    if (a>=max_weight) {
        printf("Overload: Yes");
    }
    else {
        printf("Overload: No");
    }
    return 0;
}