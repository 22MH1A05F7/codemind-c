#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,rem;
    scanf("%d%d",&n,&r);
  int t=n;
  while(n!=0)
  {
      rem=n/10;
      c++;
      n=n/10;
  }
    int a=pow(10,r);
    int b=t%a;
    int d=pow(10,c-r);
    int e=t/d;
    int aa=abs(e-b);
     printf("%d",aa);
}