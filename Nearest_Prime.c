#include<stdio.h>
int np(int);//nearest prime
int main()
{
    int t,j;
    scanf("%d",&t);
  for(j=1;j<=t;j++)
{
 int i,n,d1,d2,s,s1;
 scanf("%d",&n);
 for(i=n;;i++)
 {
     if(np(i))
     {
         d1=i-n;
         s=i;
         break;
     }
 }
 for(i=n;;i--)
 {
     if(np(i))
     {
         d2=n-i;
         s1=i;
         break;
     }
 }
 if(d1>d2)
 {
     printf("%d
",s1);
 }
 else if(d2>d1)
 {
     printf("%d
",s);
 }
 else
 {
     printf("%d
",s1);
 }
}
}
int np(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}