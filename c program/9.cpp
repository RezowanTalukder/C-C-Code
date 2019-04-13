#include<bits/stdc++.h>
using namespace std ;

int main()
{
	int x,v1,v2,t1,t2,f,s ;
	cin>>x>>v1>>v2>>t1>>t2 ;
	f=(x*v1)+(t1*2) ;
	s=(x*v2)+(t2*2) ;
	if(f==s)cout<<"Friendship" ;
	else {
            (f<s)? cout<<"First" : cout<<"Second" ;}
	return 0 ;
}
