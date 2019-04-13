#include<stdio.h>
#include<string.h>
int main()
{
    int n,i ,re,ret;
    int count=0 ;
    char s[]={'X','+','+'} ;
     char t[]={'X','-','-'} ;
    char st[1000] ;
    scanf("%d",&n) ;
    for(i=0 ;i<n ;i++){
         scanf("%s",st) ;
            ret=strcmp(s,st) ;
    re=strcmp(t,st) ;

        if(ret==0){
            count+=1 ;
        }
       else if(re==0){
            count-=1 ;
        }
    }
        printf("%d",&count) ;
printf("%s",s) ;

    return 0 ;

}
