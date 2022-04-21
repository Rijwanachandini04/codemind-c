#include<stdio.h>
#include<math.h>
main()
{
    int num,isqrt;
    float fsqrt;
    scanf("%d",&num);
    fsqrt=sqrt(num);
    isqrt=fsqrt;
    if(isqrt==fsqrt)
    printf("True");
     else
       printf("False");
       
    
}