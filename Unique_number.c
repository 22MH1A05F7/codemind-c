#include<stdio.h>
int main()
{
    int n,t,r,i;
    int b[10000];
    for(i=0;i<10000;i++)
    {
        b[i]=0;
    }
    scanf("%d",&n);
    t=n;
    while(t)
    {
        r=t%10;
        b[r]+=1;
        t=t/10;
    }
    for(i=0;i<10000;i++)
    {
        if(b[i]>1 and b[i]!=0)
        {
            printf("Not Unique Number");
            return 0;
        }
    }
    printf("Unique Number");
}