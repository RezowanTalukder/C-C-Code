#include<stdio.h>
int main()
{
    int a1[100],a2[100],i ;
    for(i=0 ;i<10 ;i++){
        scanf("%d",&a1[i]) ;
    }
    for(i=0 ;i<10 ;i++){
        a2[i]=a1[i] ;
    }
    for(i=0 ;i<10 ;i++){
        printf("%d\n",a2[i]) ;
    }
    return 0 ;
}
