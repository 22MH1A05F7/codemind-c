#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(z<y && z>=x)
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