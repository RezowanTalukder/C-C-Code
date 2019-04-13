#include<stdio.h>
int main()
{
    int i,j,temp,a[5] ;
    for(i=0 ;i<5;i++){
        scanf("%d",&a[i]) ;
    }

    for(j=0 ;j<5;j++){
            temp=a[j] ;

        for(i=j+1;i<5 ;i++){

            if(a[i]>a[j]){
                temp=a[i] ;
                a[i]=a[j] ;
                a[j]=temp ;
           }
        }
    }
    for(i=0 ;i<5;i++){
        printf("%d ",a[i]) ;
    }
    return 0 ;
}
