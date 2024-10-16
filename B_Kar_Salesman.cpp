
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
 ull n,x;
cin>>n>>x;
ull arr[n];
ull sum=0;
 ull mx=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
mx=max(mx,arr[i]);
sum=sum+arr[i];
}
 
ull left=mx;
ull right=1e17;
ull ans=mx;
while(left<=right)
{
    ull mid=(left+right)/2;
    ull fn=mid*x;
    if(fn>=sum)
    {
         ans=mid;
         right=mid-1;
    }
    else
    {
        left=mid+1;
    }
}
cout<<ans<<en;



   
}
   return 0;
}

/*RIfAt*/