#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long a[1000],i,ax[1000],b[1000],n,flag=0 ;
    cin>>n ;
    for(i=0 ;i<n ;i++){
        cin>>a[i] ;
    }
    for(i=0 ;i<n-1;i++){
        ax[i]=a[i]-a[i+1] ;
    }
    for(i=0 ;i<n-1 ;i++){
        b[i]=ax[i] ;
    }
    sort(ax,ax+n-1) ;
    for(i=0 ;i<n-1;i++){
        if(b[i]!=ax[i]){
            flag=1 ;
        }
    }
    if(flag==1)cout<<"NO" ;
    else if(flag==0)cout<<"YES" ;
    return 0 ;
}
