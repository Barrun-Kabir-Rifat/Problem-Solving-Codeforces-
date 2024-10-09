
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



 sort(arr,arr+n);
 int ptr1=0;
 int ptr2=0;
 ll sum=0;
 vector<ll>pre;
 pre.pb(0);

 for(int i=0;i<n;i++)
 {
    sum=sum+arr[i];
    pre.pb(sum);
 }
 sum=0;
 vector<ll>ans;
 ll res=0;
 while(ptr2<n)
 {
    ll dif=arr[ptr2]-arr[ptr1];
    if(dif<=1&&sum+arr[ptr2]<=k)
    {
      sum=sum+arr[ptr2];
      ptr2++;
    }
    else
    {
      ans.pb(sum);
     res=max(res,sum);
      sum=sum-arr[ptr1];
      ptr1++;
    }
 }
 res=max(res,sum);

 cout<<res<<en;
}
cout<<en;

return 0;
}