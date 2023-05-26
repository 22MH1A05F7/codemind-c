#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],arr[n],k=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            arr[k++]=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            arr[k++]=a[i];
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}