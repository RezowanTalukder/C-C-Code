#include<stdio.h>
int main()
{
	unsigned u;
	long j;
	short s;
	
	printf("enter an unsigned: ");		
	scanf("%u",&u);
	printf("enter a long: ");
	scanf("%ld",&j);
	printf("enter a short: ");
	scanf("%hd",&s);
	
	printf("%u %ld %hd\n",u,j,s);
	
	return 0;
}
