#include<stdio.h>
#include<string.h>
int main()
{
    char set[1005] ;
    int i,j,count=0 ;
    scanf("%s",set) ;
    for(i=97 ;i<=122 ;i++){
        for(j=0 ;j<strlen(set) ;j++){
            if(set[j]==i){
                count++ ;
                break ;
            }
        }
    }
    printf("%d",count) ;
    return 0 ;
}
