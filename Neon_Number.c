
#include<stdio.h>
int main()
{
    int n,r,s=0,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        r=sq%10;
        s=s+r;
        sq=sq/10;
    }
    if(n==s)
    {
    printf("Neon Number");
    }
    else
    {
    printf("Not Neon Number");
    }
}