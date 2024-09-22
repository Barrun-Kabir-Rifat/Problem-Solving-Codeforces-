
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
 ll sum=0;
 int count=0;
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
    if(arr[i]>=k)
    {
        sum=sum+arr[i];
    }
    if(sum>0&&arr[i]==0)
    {
        count++;
        sum--;
    }
 }   
 cout<<count<<en;
}
   return 0;
}