#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]%*c",str);
    int i,j;
    int l=strlen(str);
    for(i=0,j=l-1;i<=j;i++,j--)
    {
        char k=str[i];
        str[i]=str[j];
        str[j]=k;
    }
    printf("%s",str);
}