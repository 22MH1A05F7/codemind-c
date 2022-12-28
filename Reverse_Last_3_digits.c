#include<stdio.h>
int main()
{
    int n,r,rev,c;
    scanf("%d",&n);
    int a=n%1000;
    int b=n/1000;
    while(a>0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    c=b*1000+rev;
    printf("%d",c);
}