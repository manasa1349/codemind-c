#include<stdio.h>
int main()
{
    int n,o,e;
    scanf("%d",&n);
    e=(n%2==0)?(n/2):((n/2)+1);
    o=n-e;
    printf("%d",2*o*e);
}