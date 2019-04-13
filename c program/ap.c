#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000] ;
    char b[1000] ;
    int i ,len ;
    scanf("%s",&a);
    scanf("%s",&b) ;
    len=strlen(a) ;
    for(i=0 ;i<len ;i++){
            if(a[i]=='1'&&b[i]=='1'){
            	printf("%d",0) ;
			}
			if(a[i]=='0'&&b[i]=='0'){
            	printf("%d",0) ;
			}
			if(a[i]=='1'&&b[i]=='0'){
            	printf("%d",1) ;
			}
			if(a[i]=='0'&&b[i]=='1'){
            	printf("%d",1) ;
			}
    }
    return 0 ;

}

