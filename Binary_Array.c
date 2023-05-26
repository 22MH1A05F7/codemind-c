#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1 || arr[i]==0){
         c++;
        }
    }
    if(c==n){
        printf("True");
    }
    else{
        printf("False");
    }
}