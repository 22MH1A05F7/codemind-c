#include<stdio.h>
int main(){
    int n,r,m=0;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        if(r>m){
            m=r;
        }
        n=n/10;
    }
    printf("%d",m);
}