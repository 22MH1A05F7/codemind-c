#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,l,f,sum=0;
        scanf("%d",&n);
        l=n%10;
        while(n>=10)
        {
            n=n/10;
        }
        f=n;
        printf("%d
",f+l);
    }
}