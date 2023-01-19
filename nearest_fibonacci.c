#include<stdio.h>
int nfib(int);
int main()
{
 int i,n,d1,d2,f,b;
 scanf("%d",&n);
 for(i=n;;i++)
 {
     if(nfib(i))
     {
         d1=i-n;
         f=i;
         break;
     }
 }
 for(i=n;;i--)
 {
     if(nfib(i))
     {
         d2=n-i;
         b=i;
         break;
     }
 }
 if(d1>d2)
 {
     printf("%d",b);
 }
 else if(d2>d1)
 {
     printf("%d",f);
 }
 else
 {
 	printf("%d %d",b,f);
 }

}
int nfib(int n)
{
	
    int f1=0,f2=1,f3;
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        f3=f1+f2;
        while(f3<n)
        {
            f1=f2;
            f2=f3;
            f3=f1+f2;
        }
        if(f3==n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
