#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[50];
    scanf("%s",str);
    int i=0,count=0;
    while (str[i]!='\0') {
        if (isupper(str[i])) {
            count++;
            break;
        }
        i++;
    }
    (count==1)?printf("Valid"):printf("Invalid");
    return 0;
}