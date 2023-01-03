#include<stdio.h>
int main()
{
    int n,i,k1=0,k2=0,a,b;
    scanf("%d",&n);
    printf("0 0 ");
    for(i=1;i<=n-1;i++)
    {
        if(i%2==0)
        {
            a=k2*3+2;
            printf("%d ",a);
            k2=a;
        }
        else
        {
            b=k1*2+1;
            printf("%d ",b);
            k1=b;
            
        }
    }
}