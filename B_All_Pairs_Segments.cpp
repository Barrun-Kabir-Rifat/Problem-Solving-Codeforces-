
/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
  ll n,q;
  cin>>n>>q;
  vector<ll>v(n);
  map<ll,ll>mp;
  ll ans=-1;
  for(int i=0;i<n;i++)  
  {
    cin>>v[i];
    int curr_ind=i+1;
    if(curr_ind==1||curr_ind==n)
    {
        ans=n-1;
    }
    else
    {
     ans=(curr_ind*(n-i))-1;
    }
     
     mp[ans]++;
     if(i>0)
     {
    ll dif=v[i]-v[i-1];
    dif--;
     if(dif>=1) 
     {
        ll missing =i*(n-i);
        mp[missing]+=dif;
     }
     }
  }
  vector<ll>temp;
  while(q--)   
  {
    ll x;
    cin>>x;
    if(mp.find(x)==mp.end())
    {
      cout<<0<<" ";
      continue;
    }
   cout<<mp[x]<<" ";
   }
   cout<<en;

}
   return 0;
}