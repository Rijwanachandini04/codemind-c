#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,N,sum=0;
    int *arr;
    scanf("%d",&N);
    arr=(int*)malloc(N*sizeof(int));
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}