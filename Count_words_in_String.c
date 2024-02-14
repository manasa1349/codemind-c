#include<stdio.h>
int main()
{
    char s[100];
    int c=0;
    scanf("%[^
]%*c",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==32&&s[i+1]!=32)//(32=' ')
        {
          c++;
        }
    }
    printf("%d",c+1);
}