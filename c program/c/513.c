#include<stdio.h>
int main()
{
    char mess[100] ;
    int i ;
    printf("enter the massage:") ;
    for(i=0 ;;i++){
        scanf("%c",&mess[i]) ;
        if(mess[i]=='\n')break ;
    }
    printf("\n") ;
    for(i=0;mess[i]!='\n' ;i++){
        printf("%c",mess[i]) ;
    }
    return 0 ;
}
