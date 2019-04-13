#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000000] ;
	int i ,n ;
	scanf("%d",&n) ;
	int s0=0 ,s1=0 ;
	scanf("%s",str) ;
	for(i=0 ;i<n;i++){
		
		if(str[i]=='0')s0++ ;
		else if(str[i]=='1')s1++ ;
	}
	if((s0-s1)>=0)printf("%d",s0-s1) ;
	else printf("%d",s1-s0) ;
	return 0 ;
}
