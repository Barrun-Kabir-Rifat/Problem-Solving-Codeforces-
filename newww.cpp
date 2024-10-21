
/* Allah is the best planner.He knows everything*/

#include<bits/stdc++.h>
using namespace std;

#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
const ll mod=1e9+7;  
  
int main()
{
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
 ll n;
cin>>n;
ll temp=n;

for(ll i=30;i>=0;i--)
 {
   
   int checkbit=(((1<<i) & temp ) !=0 );
   cout<<checkbit;
 }
 cout<<en;
}
   return 0;
}

/*RIfAt*/