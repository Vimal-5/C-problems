#include <stdio.h>
int main() {
    int fule,n,f_pertrip,a,b,c,d;
    scanf("%d %d",&fule,&n);
    c=fule;
    while (n>0) {
        scanf("%d",&f_pertrip);
        a+=f_pertrip;
        if (fule>=a) {
            b++;
            d=a;
        }
        n--;
    }
    printf("Completed trips: %d\n",b);
    printf("Remaining fule: %d",c-d);
}