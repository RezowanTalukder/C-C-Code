#include<stdio.h>
int main()
{
    int num[31] ,i,avg=0 ,max=0 , min=500,days ;
    printf("enter the number of day in month:") ;
    scanf("%d",&days) ;
    for(i=0 ;i<days ;i++){
        scanf("%d",&num[i]) ;
    }
    for(i=0 ;i<days ;i++){
        avg+=(float)num[i]/days ;
    }
    printf("avarage=%f\n\n",(float)avg) ;

    for(i=0 ;i<days ;i++){
        if(min>num[i])min=num[i] ;
        if(max<num[i])max=num[i] ;
    }
    printf("minimum=%d\nmaximum=%d\n",min,max) ;

    return 0 ;
}
