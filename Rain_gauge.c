#include <stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int n;
		scanf("%d",&n);
		if(n<3)
		{
			printf("LIGHT
");
		}
		else if(n>=3 && n<7)
		{
			printf("MODERATE
");
		}
		else
		{
			printf("HEAVY
");
		}
	}
}

