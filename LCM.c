#include<stdio.h>
int main()
{
    int m,n,max,lcm;
    scanf("%d %d",&n,&m);
    
    max=m>n?m:n;
    lcm=max;
    for(int i=max;;i=i+max)
    {
        if(i%m==0 && i%n==0)
        {
            lcm=i;
            break;
        }
    }
    printf("%d",lcm);
    return 0;
}