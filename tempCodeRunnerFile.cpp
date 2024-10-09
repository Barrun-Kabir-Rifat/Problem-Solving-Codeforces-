
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
  int n;
  cin>>n;
  vector<pair<int,int> >v;  
  map<int,int>mp;
  map<int,int>mp1;
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
     v.pb({x,y});
     if(y==0)
     {
       mp[x]=1;
     }
     if(y==1)
     {
        mp1[x]=1;
     }
  }
  sort(v.begin(),v.end());
  int count=0;
  int ct=0;

ll ans=0;
  for(int i=0;i<v.size()-1;i++)
  {
    if(v[i].first==v[i+1].first)
    {
      ans=ans+(n-2);
    }
    int x=v[i].first;
    int y=v[i].second;
    if(y==1)
    {
     if(mp[x-1]==1&& mp[x+1]==1)  
      {
        count++;
      }
    }
    if(y==0) 
    {
        if(mp1[x-1]==1&&mp1[x+1]==1)
        {
            count++;
        }
    }
  }
  ans=ans+count;
  cout<<ans<<en;
}
   return 0;
}