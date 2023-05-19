#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
    int x=i,d=0,c=0;
        while(x){
            d++;
            if(x%10==0)
            break;
            if(i%(x%10)==0)
            c++;
            x=x/10;
        }
        if(d==c){
            printf("%d ",i);
        }
    }
}