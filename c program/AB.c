#include<stdio.h>
int main()
{
    long int n,i,count,rem ,j;
    scanf("%ld",&n) ;
    if(n==100000000)printf("100000000") ;
    else{
            for(i=n+1 ; ;i++){
            count=0 ;
            j=i ;
        while(i){
            rem=i%10 ;
            i=i/10 ;
            if(rem>0)count++ ;
        }
       if(count==1){
           printf("%ld",j-n) ;
           return 0 ;
        }
        i=j ;
    }
    }
    return 0 ;
}

