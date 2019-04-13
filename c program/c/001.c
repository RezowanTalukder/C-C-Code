#include<stdio.h>
int main()
{
    int k,l,m,n,d ;
    scanf("%d",&k) ;
    scanf("%d",&l) ;
    scanf("%d",&m) ;
    scanf("%d",&n) ;
    scanf("%d",&d) ;
    if(d%n==0){
        printf("%d",(d/n)*4) ;
    }
    else{
        printf("%d",(d/n)*4+1) ;
    }
    return 0 ;
}
