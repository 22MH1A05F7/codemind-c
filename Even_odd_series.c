#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=1,d=-1,a,b,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(2,c);
            c++;
            printf("%d ",a);
        }
        else 
        {
        if(d==-1)
        {
            printf("0 ");
            d++;
        }
        else
        {
            b=pow(3,d);
            d++;
            printf("%d ",b);
        }
        }
    }
}
    