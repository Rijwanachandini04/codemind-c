#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],i,sum=0,s=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum=sum+arr[i];
        }
        else
        {
            s=s+arr[i];
        }
    }
    printf("%d",abs(sum-s));
}