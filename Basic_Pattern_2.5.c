#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    char c=64+n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
        }
        (c)--;
        printf("
");
    }
}