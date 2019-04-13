#include<stdio.h>
int main()
{
	int k,i,j,ar[12] ,temp ;
	scanf("%d",&k) ;
	for(i=0 ;i<12 ;i++){
		scanf("%d",&ar[i]) ;
	}
	if(k==0)printf("0") ;
	else{
	for(i=0 ;i<12 ;i++){
		for(j=i+1 ;j<12 ;j++){
			if(ar[i]<ar[j]){
				temp=ar[i] ;
				ar[i]=ar[j] ;
				ar[j]=temp ;
			}
		}
	}
/*	printf("sorted array:") ;
	for(i=0 ;i<12 ;i++){
		printf("%d",ar[i]) ;
	} */
	for(i=1 ;i<12 ;i++){
	int sum=0 ;
		for(j=0;j<i ;j++){
			sum+=ar[j] ;
			if(sum>=k){
				printf("%d",i) ;
				return 0 ;
			}
		}
	}
	}
	return 0 ;
}
