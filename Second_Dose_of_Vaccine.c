#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b && a<=c)
        {
            printf("Take second dose now
");
        }
        else if(a>b)
        {
            printf("Too Late
");
        }
        else if(a<c)
        {
            printf("Too Early
");
        }
    }
}