#include<bits/stdc++.h>
using namespace std ;
#define for(a,b) for(int i=a ;i<b ;i++)
#define rfor(i,a,b) for(int i=a ;i>b ;i--)
typedef long long LL ;

int main()
{
    int i,arr[10] ;
    rfor(9,0)arr[i]=i ;
    sort(arr,arr+sizeof(arr)/sizeof(arr[0]),greater<int>()) ;
    for(0,9){
        cout<<arr[i]<<endl ;
    }
    cout<<max(1,3)<<endl ;
    return 0 ;
}
