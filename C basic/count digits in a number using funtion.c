int countdigits(int n) {
    int count=0,a;
    while (n!=0) {
        a=n%10;
        n/=10;
        count++;
    }
    return count;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",countdigits(n));
}