#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,i ;
	scanf("%d%d",&n,&t);
	for(pow(10,n-1) ;i<(pow(10,n)-1); i++){
			if(i%t==0){
				printf("%d",i) ;
				return 0 ;
			}
	}
	printf("%d",-1) ;
	return 0 ;
}
