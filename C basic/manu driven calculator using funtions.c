#include<stdio.h>
int sum(int a,int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;
}
int div(int a,int b) {
    return a/b;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    printf("select operation :+(1),-(2),*(3),/(4)");
    scanf("%d",&c);
    switch(c) {
        case 1:
            printf("%d",sum(a,b)); break;
        case 2:
            printf("%d",sub(a,b)); break;
        case 3:
            printf("%d",mul(a,b)); break;
        case 4:
            printf("%d",div(a,b)); break;
        default:
            printf("Invalid Input");
    }
    return 0;
}