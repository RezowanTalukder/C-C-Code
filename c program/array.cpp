#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long na,nb,k,m,a[100001],b[100001] ;
    cin>>na>>nb ;
    cin>>k>>m ;
    for(int i=0 ;i<na ;i++)cin>>a[i] ;
    for(int i=0 ;i<nb ;i++)cin>>b[i] ;
    if(a[k-1]<b[nb-m])cout<<"YES" ;
    else cout<<"NO" ;
    return 0 ;
}
