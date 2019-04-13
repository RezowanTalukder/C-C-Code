#include<stdio.h>
#include<math.h>
int f(long int x) ;

int main()
{
    long int a,b,temp ;
    scanf("%ld%ld",&a,&b) ;

    temp=(a<b)? a:b ;

    printf("%ld",f(temp)) ;
    return 0 ;
}
int f(long int x)
{
    if(x==0)return 1 ;
    else if(x==1)return 1;
    else return x*f(x-1) ;
}
