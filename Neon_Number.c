#include<stdio.h>
int main()
{
    int n,s=0,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0){
        s=s+sq%10;
        sq=sq/10;
    }
    if(n==s){
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}