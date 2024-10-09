
/* Allah is the best planner.He knows everything*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;

void solve()
{
}

int main()
{
    fast();

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        x--;
        y--;
        vector<ll> v(n, 0);

        for (int i = y; i <= x; i++)
        {
            v[i] = 1;
            ;
        }
        int ct = 0;
        for (int i = y - 1; i >= 0; i--)
        {

            if (ct % 2 == 0)
            {
                v[i] = -1;
            }
            else
            {
                v[i] = 1;
            }
            ct++;
        }
        ct=0;
        for(int i=x+1;i<n;i++)
        {
             if (ct % 2 == 0)
            {
                v[i] = -1;
                
            }
            else
            {
                v[i] = 1;
            }
            ct++;
        }
        for(auto it: v)
        {
            cout<<it<<" ";
        }
        cout<<en;
    }
    return 0;
}