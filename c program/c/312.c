#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b ;
    char ch ;

    printf("enter two numbers :") ;
    scanf("%d%d",&a,&b) ;
    printf("enter symbol:") ;
    ch =getchar() ;
    printf("\n") ;
    switch(ch){
        case '+' :printf("sum=%d\n",a+b) ;break ;
        case '-' :printf("minus =%d\n",a-b) ;break ;
        case '*' :printf("product=%d\n",a*b) ;break ;
        case '/' :printf("divide=%d\n",a/b) ;break ;

    }
    return 0 ;
}

