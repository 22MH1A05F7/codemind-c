#include<stdio.h>
#include<math.h>
int main()
{
	int n,a=1,b=2,i;
	scanf("%d",&n);
		printf("%d ",a);
			printf("%d ",b);
	for(i=0;i<=n-2;i++)
	{
		if(i%2==0)
		{
	    
		   a=(a*2)+1;
		   	printf("%d ",a);
		}
		else
		{
		
		b=(b*3)+2;
			printf("%d ",b);
		}
	}
}