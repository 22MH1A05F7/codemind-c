#include<stdio.h>
int main(){
    int n,s=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(i=0;i<n;i++){
        if(a[i]<=t){
            s=s+1;
        }
        else
        {
            s=s+2;
        }
    }
    printf("%d",s);
}