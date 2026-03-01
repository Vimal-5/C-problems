#include<stdio.h>
#include<string.h>
void palindrom(char *a) {
    int len=strlen(a);
    int count=1;
    for (int i=0;i<len/2;i++) {
        if (a[i]=!a[len-i-1]) {
           count++;
            break;
        }
    }
    (count==1) ? printf("Palindrom"):printf("Not Palindrom");
}
int main() {
    char str[50];
    scanf("%s",str);
    char *p=str;
    palindrom(p);
    return 0;
}