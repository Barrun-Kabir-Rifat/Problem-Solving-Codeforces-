#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  int  n,k;
  cin>>n>>k;
  string str;
  cin>>str;
  int count=0,mx=0;
  int flag=0;
  for(int i=0;i<n;i++)
  {
    if(str[i]=='B')
    {
        count++;
        flag++;
    }
    else
    {
        mx=max(mx,count);
        count=0;
    }
  }

  mx=max(mx,count);
  if(mx>=k)
  {
    cout<<0<<endl;
  }
  else
  {
    ll ans1=k-mx;
    ll ans2=k-flag;
  }
}
  
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
   return 0;
}