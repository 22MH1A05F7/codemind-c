#include<stdio.h>
int main()
{
	int n,i,c=1;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c=0;
			break;
		}
	}
	if(c==1)
	{
		printf("prime");
	}
	else
	{
	    printf("not a prime");
	}
}