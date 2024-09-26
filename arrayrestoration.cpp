#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define nl 
  
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
 int t=1; 
 cin>>t;
while(t--)
{
 ll n,x,y;
 cin>>n>>x>>y;
 ll dif=y-x;
 if(dif%(n-1)==0)
 {
    dif=dif/(n-1);
    cout<<x<<" ";
    for(int i=2;i<=n;i++)
    {
     x=x+dif;
     cout<<x<<" ";
    }
 }
 else
 {
    
 }
}
   return 0;
}