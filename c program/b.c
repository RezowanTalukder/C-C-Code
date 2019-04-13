#include<stdio.h>
int main()
{
    long int t,s,m ;
    scanf("%ld%ld%ld",&t,&s,&m) ;
    if (m>=t &&( (m-t)%s==0 || (m-t-1!=0 && (m-t-1)%s==0))) printf("YES\n");
    else printf("NO\n");
    return 0 ;
}
