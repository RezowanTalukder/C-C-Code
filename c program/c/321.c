#include<stdio.h>
int main()
{
	int a,b ;
	char ch ;
	printf("enter symbol:") ;
	ch=getche() ;
	printf("\n") ;
	printf("enter two number:") ;
	scanf("%d%d",&a,&b) ;
	if(ch=='+')printf("%d",a+b) ;
	if(ch=='-')printf("%d",a-b) ;
	if(ch=='*')printf("%d",a*b) ;
	if(ch=='/')printf("%d",a/b) ;
	return 0 ;
}
