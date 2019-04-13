#include<stdio.h>
int main()
{
    int i,a,b ;
    char ch ;
    do{
        printf("enter first letter of operation:") ;
        ch=getchar() ;
        getchar() ;
    }
    while(ch!='a'&&ch!='s'&&ch!='m') ;
    printf("enter two numbers:") ;
    scanf("%d%d",&a,&b) ;
    switch(ch){
        case 'a':printf("%d",a+b) ;break ;
        case 's':printf("%d",a-b) ;break ;
        case 'm':printf("%d",a*b) ;break ;

    }
    return 0 ;
}
