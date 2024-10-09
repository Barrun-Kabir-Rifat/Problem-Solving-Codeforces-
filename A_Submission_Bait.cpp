
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
    ll arr[n];
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int flag=0;
    for(auto it:mp)
    {
        if(it.second%2==1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
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