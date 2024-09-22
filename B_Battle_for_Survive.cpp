
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
   for(int i=0;i<n;i++) 
   {
    cin>>arr[i];
   }
   ll sum=arr[n-1];
   ll temp=arr[n-2];
    
   for(int i=n-3;i>=0;i--)
   {
    temp=temp-arr[i];
   }
    sum=sum-temp;
    cout<<sum<<en;
}
   return 0;
}