#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,c;
    scanf("%lf%lf%lf",&p,&r,&t);
    c=p*pow(1+(0.01*r),t);
    printf("%0.2lf",c);
}