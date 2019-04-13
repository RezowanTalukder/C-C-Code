#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30],str3[10] ;
    int i,j,flag ;
    //scanf("%s",&str1) ;
    gets(str2) ;
  //  scanf("%s",&str3) ;
   /* for(i=0 ;i<strlen(str3) ;i++){
        flag=0 ;
        if(str3[i]<95){
            str3[i]=str3[i]+32 ;
            flag=1 ;
        }
        for(j=0 ;j<strlen(str1) ;i++){
            if(!strcmp(str1[j],str3[i])){
                if(flag==1)printf("%s",str2[j]-32) ;
                else printf("%s",str2[j]) ;
            }
        }
    }*/
    printf("%c",str2[2]) ;
    return 0 ;
}
