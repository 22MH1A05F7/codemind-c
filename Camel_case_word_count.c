#include<stdio.h>
int main()
{
    char s[100];
    int c=1,i;
    scanf("%[^
]s",s);
    for(i=1;s[i]!=NULL;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            c++;
        }
    }
    printf("%d",c);
}