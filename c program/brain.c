#include<stdio.h>
int main()
{
    char ch ;
    int n,m,i,j,flag=0 ;
    scanf("%d%d",&n,&m) ;
    for(i=0 ;i<n ;i++){
        for(j=0 ;j<m ;j++){
                getchar() ;
            scanf("%c",&ch) ;
           if(ch=='C')flag++ ;
           else if(ch=='M')flag++ ;
           else if(ch=='Y')flag++ ;

        }
    }
    if(flag==0)printf("#Black&White") ;
    else printf("#Color") ;
    return 0 ;
}
