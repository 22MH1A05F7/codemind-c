#include<stdio.h>
int main() {
    int n,i,j;
    scanf("%d", &n);
    for(i = 1; i<n*2; i++)
    {
        for( j = 1; j<n*2; j++)
        {
            int a = i, b = j;
            if(a>n) a = n*2-a;
            if(b>n) b = n*2-b;
            a = (a<b)? a:b;
            printf("%d ",n-a+1);
        }
        printf("
");
    }
    return 0;
}
