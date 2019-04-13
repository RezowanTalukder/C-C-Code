#include<stdio.h>
int main()
{
    int a[100],n,k,i,t,j,s,flag=0,sum,temp=0 ;
    scanf("%d%d",&n,&s) ;
    for(i=0 ;i<n ;i++){
        scanf("%d",&a[i]) ;
    }
    for(k=n ;k>0 ;k--){
            sum=0 ;
        for(j=0 ;j<k ;j++){
            sum+=a[j]+k*(j+1) ;

           }
           if(sum<=s){
                flag=1 ;
               break ;
           }
        }
    if(flag==0)printf("0 0") ;
   else printf("%d %d",k,sum) ;
    return 0 ;
}
