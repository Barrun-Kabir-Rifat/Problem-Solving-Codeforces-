
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
  ll arr[n];
  ll evensum=0;
  vector<ll>even;
  vector<ll>odd;
  int eve=0;
  int od=0;
  for(int i=0;i<n;i++) 
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  ll sum=0;
  int ct=0;
  for(int i=0;i<n;i++) 
  {
     sum=sum+arr[i];
     ct++;
     if(ct==1)
     {
        continue;
     }
     else
     {
        sum=sum/2;
     }
  }
  cout<<sum<<en;

}
   return 0;
}