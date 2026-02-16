#include<stdio.h>
int main() {
    int datapack,n,d_pack,count,o_used=0,c=0,a=0,b=0;
    scanf("%d %d",&datapack,&n);
    while(n>0) {
        scanf("%d",&d_pack);
        a+=d_pack;
        if (a<=datapack) {
            count++;
            b=d_pack;
        }
        else {
            o_used++;
            a-=datapack;
        }
        c+=d_pack;
        n--;
    }
    (c>=datapack)?printf("Exhausted day: %d\n",count):printf("Exhausted day: Not exhausted\n");
    printf("Overused data: %d",o_used);
    return 0;
}