#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[50];
    fgets(str,sizeof(str),stdin);
    char target[50];
    fgets(target,sizeof(target),stdin);
    int i=0;
    char str2[sizeof(str)];
    while (str[i]!='\0') {
        str2[i]=str[i];
        if (strcmp(str2,target)==0) {
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}