#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int x,n,m;
        scanf("%d%d",&x,&n);
        m=x/10;
        printf("%d
",m*n);
    }
}