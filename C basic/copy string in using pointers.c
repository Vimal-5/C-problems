#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* copy(char *a) {
    char *c=malloc(strlen(a)+1);
    if (c!='\0') {
        strcpy(c,a);
    }
    return c;
}
int main() {
    char arr[50];
    fgets(arr,sizeof(arr),stdin);
    char *p=arr;
    char *d=copy(p);
    printf("%s",d);
}