#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=n-i+1;j--)
        {
            printf("* ");
        }
        printf("
");
    }
}