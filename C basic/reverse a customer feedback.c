#include<stdio.h>
#include<string.h>
int main() {
    char str1[50];
    fgets(str1,50,stdin);
    int i=0,str2[50],a,j=0;
    a=strlen(str1);
    for (i=a;i>=0;i--){
            str2[j]=str1[i];
            j++;
    }
    for (j=0;j<=a;j++) {
        printf("%c",str2[j]);
    }
}