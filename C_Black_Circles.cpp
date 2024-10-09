
/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
  
ll distance(ll a,ll b,ll c, ll d)
{
  ll ans=((a-c)*(a-c))+((b-d)*(b-d));
  return ans;
}


int main()
{
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
   ll xs,ys,xt,yt;
   cin>>xs>>ys>>xt>>yt;

ll dis= distance(xs,ys,xt,yt);
int flag=0;
    for(int i=0;i<n;i++)
    {
      ll  temp_dis=distance(xt,yt,v[i].first,v[i].second);
      if(temp_dis<=dis)
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
        cout<<"YES"<<en;
    }
    else
    {
        cout<<"NO"<<en;
    }

}
   return 0;
}