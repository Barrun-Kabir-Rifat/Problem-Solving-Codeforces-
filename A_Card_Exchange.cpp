
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
  ll n,k;
  cin>>n>>k;
  ll arr[n];
  map<ll,ll>mp;
  for(int i=0;i<n;i++)  
  {
    cin>>arr[i];
    mp[arr[i]]++;
  }
  ll mx=0;
  for(auto it: mp)
  {
     mx=max(it.second,mx);
  }
  if(mx>=k)
  {
    cout<<k-1<<en;
  }
  else
  {
    cout<<n<<en;
  }

}
   return 0;
}