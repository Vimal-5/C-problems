#include<stdio.h>
#include<string.h>
int main() {
    char str1[50];
    fgets(str1,sizeof(str1),stdin);
    char str2[50];
    int i=0;
    while (str1[i]!='\0') {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    strrev(str1);
    printf("%s ",str1);
    printf("%s",str2);
    int count=0;
    if (strcmp(str2,str1)==0) {
        count=1;
    }
    printf("%d ",count);
    (count==1)?printf("Palindrome"):printf("Not Palindrome");
    return 0;
}