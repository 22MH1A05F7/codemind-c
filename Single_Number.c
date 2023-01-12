#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=a[0];
    for(i=1;i<n;i++)
    {
        x=x^a[i];
    }
    
    printf("%d",x);  
    
}