
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
    ll n;
    cin>>n;
    ll x,y;
    cin>>x>>y;
    ll mn=min(x,y);
  ll res=n/mn;
  if(n%mn==0)
  {
    cout<<res<<en;
  }
  else
  {
    cout<<res+1<<en;
  }
}
   return 0;
}