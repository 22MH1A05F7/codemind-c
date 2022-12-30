

#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,ld,d=0,r,fd,cd;
    scanf("%d",&n);
    ld=n%10;
    t=n;
    while(n>0)
    {
        r=n%10;
        d++;
        n=n/10;
    }
    int p=pow(10,d-1);
    fd=t/p;
    int a=(fd*p)+ld;
    cd=t-a;
    int nd=(ld*p)+cd+fd;
    printf("%d",nd);
}


