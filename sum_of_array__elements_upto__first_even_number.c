#include<stdio.h>
int main()
{
	int n,i,s=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
	    if(a[i]%2==0)
	    {
	       break;
	    }
	    s=s+a[i];
	}
	 printf("%d",s);
}