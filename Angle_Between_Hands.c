#include<stdio.h>
#include<math.h>
int main()
{
    float h,m,hr,min;
    float a;
    scanf("%f:%f",&h,&m);
    hr=h*30+m*0.5;
    min=m*6;
    a=abs(hr-min);
    if(a>180)
    {
        a=360-a;
    }
    printf("%.1f",a);
}