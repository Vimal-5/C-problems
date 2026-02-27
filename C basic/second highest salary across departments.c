#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    int s_max=0;
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            if (max<arr[i][j]) {
                max=arr[i][j];
            }
            if (s_max<max) {
                s_max=arr[i][j];
            }
        }
    }
    printf("%d",s_max);
    return 0;
}