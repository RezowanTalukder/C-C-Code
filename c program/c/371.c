#include<stdio.h>
int main()
{
    int i ;
    char ch ;
    for(i=1 ;i<100 ;i++){
        if(!(i%6)){printf("%d\n",i) ;
        printf("do you wanna continue? Y/N\n") ;
        ch=getchar() ;
        if(ch=='N')break ;
        printf("\n") ;}
    }
    return 0;

}
