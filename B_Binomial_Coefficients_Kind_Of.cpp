
/* Allah is the best planner.He knows everything*/

#include<bits/stdc++.h>
using namespace std;

#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
const ll mod=1e9+7;  

ll powerfunction(ll a,ll b) 
{
     b%=mod;
     if(b==0)
     {
        return 1;
     }
     ll res=powerfunction(a,b/2);
     res%=mod;

     if(b%2==0)
     {
        return (res*res)%mod;
     }
     else
     {
        return (a*res*res)%mod;
     }
}



int main()
{
fast();
 
 ll t;
 cin>>t;
 ll n[t];
 ll k[t];
 for(int i=0;i<t;i++)
 {
    cin>>n[i];
 }
 for(int i=0;i<t;i++)
 {
    cin>>k[i];
 }
 for(int i=0;i<t;i++)
 {
    cout<<powerfunction(2,k[i])<<en;
 }


   return 0;
}

/*RIfAt*/