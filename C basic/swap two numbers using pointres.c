#include<stdio.h>
int swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before %d %d\n",a,b);
    swap(&a,&b);
    printf("After %d %d\n",a,b);
    return 0;
}