
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
//fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>rem;
    if(n<100)
    {
        cout<<"NO"<<endl;
        continue;
    }
    while(n>99) 
    {
       int r=n%10;
       rem.pb(r);
       n/=10;
    }
     int flag=0;
     if(n>10)
    {
        flag=1;
    }
     if(rem.size()<1)
     {
        flag=1;
     }
      if(rem[rem.size()-1]==0)
        {
            flag=1;
        }
    for(int i=rem.size()-1;i>=0;i--)
    {
       
         if(rem.size()<2&&rem[i]<2)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"NO"<<en;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
   return 0;
}