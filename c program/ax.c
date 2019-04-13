#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,b,n,t,i ;
	
	
	scanf("%I64d%I64d",&n,&t);
	
	a=pow(10,n-1) ;
	b=(pow(10,n)-1) ;
	
	
	for(i=a ;i<=b ; i++){
			if(i%t==0){
				printf("%I64d",i) ;
				return 0 ;
			}
	}
	printf("%d",-1) ;
	return 0 ;
}

