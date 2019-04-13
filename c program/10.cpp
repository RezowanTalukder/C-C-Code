#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int k,n,i,j,rem,sum=0 ;
    cin>>k ;
    cin>>n ;
    while(n){
        sum+=n%10 ;
        n=n/10 ;
    }
    if(sum>k)cout<<"0" ;
    else{
        cout<<abs(sum-k) ;
    }
    return 0 ;
}
