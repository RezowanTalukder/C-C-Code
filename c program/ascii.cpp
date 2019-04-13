#include<bits/stdc++.h>
using namespace std ;
int main()
{
    char s[105] ;
    int n,i,cl,acl,sum=0 ;
    cin>>s ;
    char ch1='a' ;
    for(i=0 ;i<strlen(s) ;i++){
        char ch2=s[i] ;
        if(ch1<ch2){
        acl=abs(ch2-ch1) ;
        cl=abs(123-ch2)+abs(ch1-'a') ;
        (cl<acl)?sum+=cl:sum+=acl ;
        }
        else if(ch1==ch2)sum+=0 ;
        else {
            acl=abs(ch2-ch1) ;
            cl=cl=abs(123-ch1)+abs(ch2-'a') ;
            (cl<acl)?sum+=cl:sum+=acl ;
        }
        ch1=s[i] ;
    }
    cout<<sum;
    return 0 ;
}
