#include<stdio.h>
int vowels(char *a) {
    int count;
    for (int i=0;a[i]!='\0';i++) {
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
            a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U') {
            count++;
        }
    }
    return count;
}
int main() {
    char arr[50];
    fgets(arr,sizeof(arr),stdin);
    char *p=arr;
    printf("%d",vowels(p));
    return 0;
}