#include<stdio.h>
void check(int x) ;
int main()
{
    long long int n;
    scanf("%lld",&n) ;
    check(n) ;
    return 0 ;
}
void check(int x)
{
    do{
       x=x/2 ;
       if(x==0){
        printf("no") ;
        return 0 ;
       }
    }
    while(x!=1) ;
    printf("yes") ;

}
