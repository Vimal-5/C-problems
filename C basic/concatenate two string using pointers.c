#include<stdio.h>
#include<string.h>
void concatenate(char *c1, char *c2, char *result) {
    char *a=result;
    while (*c1!='\0' && *c1!='\n') {
        *result=*c1;
        result++;
        c1++;
    }
    while (*c2!='\0' && *c2!='\n') {
        *result=*c2;
        result++;
        c2++;
    }
    *result='\0';
    printf("%s",a);
}
int main() {
    char str[50];
    fgets (str, 50, stdin);
    char str2[50];
    fgets(str2, 50, stdin);
    char result[100];
    char *p = str;
    char *p2 = str2;
    concatenate(p,p2,result);
    return 0;
}