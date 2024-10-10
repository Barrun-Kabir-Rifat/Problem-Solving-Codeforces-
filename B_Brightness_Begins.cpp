
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
    ll k;
    cin>>k;
    

    // for(int i=k+1;i<=ans;i++)
    // {
    //        ll squre=sqrt(i);
    //        if(squre*squre==i)
    //        {
    //         count++;
    //        }
    // }
      ll left=1;
      ll right=4e18;
      ll ans=4e18;
      while(left<=right)
      {
        ll mid=(left+right)/2;
         ll want=mid-(ll)sqrt(mid);
         if(want<k)
         {
            left = mid+1;
         }
         else 
         {
             ans=mid;
            right=mid-1;
           
         }
      }

    cout<<ans<<en;
}
   return 0;
}