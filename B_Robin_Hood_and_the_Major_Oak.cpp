
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
   if(n==1)  
   {
    cout<<"NO"<<en;
   }
   else
   {
    k--;
    ll first=n-k;
    ll second=n;
     if(first<=0)
     {
      first=1;
     }
     ll digit=second-first; 
      digit++;
      ll odd=0;
      if(first%2 == 1 && second%2 ==0 )
      {
        odd=digit/2;
      }
      else if(first%2==1&&second%2==1)
      {
        odd=digit/2;
        odd++;
      }
      else if(first%2== 0&& second%2 ==1)
      {
        odd=digit/2;
      }
      else if(first%2 == 0 && second%2 ==0 )
      {
        odd=digit/2;
      }

      if(odd%2==0)
      {
        cout<<"YES"<<en;
      }
      else
      {
        cout<<"NO"<<en;
      }
   }
}
   return 0;
}