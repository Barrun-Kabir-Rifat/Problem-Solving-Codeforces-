
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
   
 ll n,k;

cin>>n>>k;

ll arr[n];
map<ll,ll>mp;
for(int i=0;i<n;i++)
{
cin>>arr[i];
mp[arr[i]]++;
}
   sort(arr,arr+n);

  vector<ll>unique;
  for(auto it:mp)
  {
    unique.pb(it.first);
  }
  int ptr1=0;
  int ptr2=1;
  ll sum=mp[unique[ptr1]];
  ll mx=mp[unique[ptr1]];
  ll temp=k;
  temp--;
  ll ptr=0;
  while(ptr2<unique.size())
  {
    if(unique[ptr2]-unique[ptr1]>1)
    {
      mx=max(mx,sum);
      sum=0;
      temp=k;
      ptr1=ptr2;
      ptr=ptr2;
      sum=sum+mp[unique[ptr2]] ;
      mx=max(mx,sum);
      temp--;
      ptr2++;
    }
  else if (temp>0)
    {
                                    
        sum=sum+mp[unique[ptr2]];
        mx=max(sum,mx);
        temp--;
        ptr1++;
        ptr2++;
    }
    else if(temp==0)
    {
        mx=max(mx,sum);
        sum=sum-mp[unique[ptr]];
        ptr++;
        temp++;    
    }
  }

             mx=max(mx,sum);
             cout<<mx<<en;
      

  
}
   return 0;
}

/*RIfAt*/