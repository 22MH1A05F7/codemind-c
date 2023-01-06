#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,wc=1;
    for(i=1;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
        wc++;
        }
    }
    printf("%d",wc);
}