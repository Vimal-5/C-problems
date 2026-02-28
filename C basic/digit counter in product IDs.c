#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[50];
    fgets(str,sizeof(str),stdin);
    int i=0,count=0;
    while (str[i]!='\0') {
        if (isdigit(str[i])) {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}