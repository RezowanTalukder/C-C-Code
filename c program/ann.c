#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,t,i ;
	long long int a,b ;
	
	scanf("%lld%lld",&n,&t);
	
	a=pow(10,n-1) ;
	b=(pow(10,n)-1) ;
	
	
	for(i=a ;i<=b ; i++){
			if(i%t==0){
				printf("%lld",i) ;
				return 0 ;
			}
	}
	printf("%d",-1) ;
	return 0 ;
}

