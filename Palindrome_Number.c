#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,temp,r,rev=0;
        scanf("%d",&n);
        temp=n;
        while(temp!=0)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(n==rev)
        {
           printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}