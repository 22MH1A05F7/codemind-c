#include<stdio.h>
int main()
{
    int n,i,j,k,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(z=1;z<=n-i;z++)
        {
            printf(" ");
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("0");
        for(k=1;k<=i-1;k++)
        {
            printf("%d",k);
        }
        printf("
");
    }
}