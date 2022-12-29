#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>30)
        {
           printf("YES
"); 
        }
        else
        {
            printf("NO
");
        }
    }
}