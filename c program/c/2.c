#include<stdio.h>
int main()
{
    int i,j,min,a[5] ,k;
    for(i=0 ;i<5 ;i++){
        scanf("%d",&a[i]) ;
    }
    for(j=0 ;j<5;j++){
        min=a[j] ;
        for(i=j+1 ;i<5;i++){
            if(a[i]<a[j]){
                min=a[i] ;
                a[i]=a[j] ;
                a[j]=min ;
                for(k=0 ;k<5 ;k++){
                    printf("%d ",a[k]) ;
                }
                printf("\n") ;
            }

        }
    }
    printf("\n\nFINALLY\n") ;

    for(i=0 ;i<5 ;i++){
        printf("%d ",a[i]) ;
    }

    return 0 ;
}
