#include<stdio.h>
int main()
{
    int sum=0,l,n,r;
    scanf("%d",&n);
    l=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        
    }
    if(sum==l)
    printf("True");
    else
    printf("False");
}