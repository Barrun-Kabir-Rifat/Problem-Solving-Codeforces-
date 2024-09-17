
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
  if(n%2==0)
  {
    cout<<-1<<en;
  }
  else
  {
    
        for(int i=1;i<=n/2;i++)
        {
            cout<<i<<" ";
        }
        for(int i=n;i>=(n/2)+1;i--)
        {
            cout<<i<<" ";
        }
        cout<<en;
  }
}
   return 0;
}