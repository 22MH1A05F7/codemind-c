#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        long n,m,j;
        scanf("%ld%ld",&n,&m);
        int res=-1;
            for( j=0; j<m;j++)
            {
                if(j*j%m==n)
                {
                    res=j;
                    break;
                }
            }
            printf("%d
",res);
    }
}