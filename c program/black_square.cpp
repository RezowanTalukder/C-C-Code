#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m,u1,u2,l,r,tempx=0,tempy=0,x,y ;
    char s[100][100] ;
    cin>>n>>m ;
    for(int i=0 ;i<n ;i++){
        cin>>s[i] ;
    }
    for(int i=0 ;i<n ;i++){
            int b1=0,b2=0 ;
        for(int j=0 ;j<m ;j++){
            if(s[i][j]=='B'){ b1=j ;break ;
        }
        for(int j=m-1 ;j>=0 ;j--){
            if(s[i][j]=='B'){ b2=j ;break ;
        }
        x=b2-b1 ;
        if(x>tempx)tempx=x ;

    }
}
