#include<stdio.h>
int main()
{
    int n,r,i,s=0,f=1,p;
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        f=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            f=f*i;
            
        }
        s=s+f;
        n=n/10;
    }
    if(s==p)
    {
        printf("The number %d is a strong number",p);
    }
    else
    {
        printf("The number %d is not a strong number",p);
    }
}