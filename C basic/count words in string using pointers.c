#include<stdio.h>
int main() {
    char str[50];
    fgets (str, 50, stdin);
    char *p = str;
    int i=0,count=1;
    while (p[i]!='\0') {
        if (p[i]==' ') {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}