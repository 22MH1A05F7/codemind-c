#include<stdio.h>
int main()
{
    int n,i,s=0,av,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    av=s/n;
    for(i=0;i<n;i++)
    {
        if(av==a[i])
        {
            printf("True");
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}