#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[109];
    string s="YES";
    bool inc=false,same=false,dec=false;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        s="YES";
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>0)
            {
                inc=true;

                if(same==true || dec==true)
                {
                    s="NO";
                    break;
                }

            }
            else if(a[i+1]-a[i] == 0)
            {
                same=true;

                if(dec==true)
                {
                    s="NO";
                    break;
                }

            }
            else {
                dec=true;
            }
        }
    }
    cout<<s<<endl;

    return 0;
}

