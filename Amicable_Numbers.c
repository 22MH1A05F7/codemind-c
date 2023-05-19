#include<stdio.h>
int main(){
   int n,m,s1=0,s2=0;
   scanf("%d%d",&n,&m);
   for(int i=1;i<=n/2;i++){
       if(n%i==0){
           s1=s1+i;
       }
   }
   for(int i=1;i<=m/2;i++){
       if(m%i==0){
           s2=s2+i;
       }
   }
   if(s1==m && s2==n){
       printf("Amicable");
   }
   else{
       printf("Not Amicable");
   }
}