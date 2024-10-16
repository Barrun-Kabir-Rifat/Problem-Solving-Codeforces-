
/* Allah is the best planner.He knows everything*/

#include<bits/stdc++.h>
using namespace std;

#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
const ll mod=1e9+7;  
  
int main()
{
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
 ll b,c,d;
 cin>>b>>c>>d;
    map<vector<ll>,ll>mp;
    mp[{0,0,0}]=0;
    mp[{0,0,1}]=1;
    mp[{0,1,0}]=0;
    mp[{0,1,1}]=-1;
    mp[{1,0,0}]=-1;
    mp[{1,0,1}]=1;
    mp[{1,1,0}]=1;
    mp[{1,1,1}]=0;
        ll value=0;
    for(ll i=60;i>=0;i--)
    {
        int x=(((1ll<<i)&b) !=0);
            
        int y=(((1ll<<i)&c) !=0);
        int z=(((1ll<<i)&d)!=0);
         int got=mp[{x,y,z}];
        if(got==-1)
        {
            value=-1;
            break;
        }
        
         value=value+(got*(1ll<<i));
    }
    cout<<value<<en;
}
   return 0;
}

/*RIfAt*/