#include<stdio.h>
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++){
        if(arr[i]<a || arr[i]>b){
            printf("%d ",arr[i]);
            c++;
        }
    }
    if(c==0){
        printf("-1");
    }
}