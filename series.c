#include<stdio.h>
#include<math.h>
int main()
{
	int n,k1=0,k2=0,a,b,i;
	scanf("%d",&n);
	printf("0 ");
	for(i=0;i<=n-2;i++)
	{
		if(i%2==0)
		{
			
			b=pow(3,k2);
			printf("%d ",b);
			k2++;
		}
		else
		{
			
		a=pow(2,k1);
		printf("%d ",a);
		k1++;	
		}
	}
}