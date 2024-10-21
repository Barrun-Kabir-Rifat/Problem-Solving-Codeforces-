
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
const ll mod = 1e9 + 7;

int main()
{
    fast();

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll bits = (int)log2(k) + 1;
        // cout<<bits<<en;
        ll setbit = __builtin_popcount(k);
        if (bits == setbit)
        {
            cout << k << " ";
            for (int i = 1; i < n; i++)
            {
                cout << 0 << " ";
            }
            cout << en;
        }
        else if (n == 1)
        {
            cout << k << en;
        }
        else
        {

            ll value = (1 << (bits - 1)) - 1;
            k = k - value;
            cout << value << " ";
            cout << k << " ";
            for (int i = 3; i <= n; i++)
            {
                cout << 0 << " ";
            }
            cout << en;
        }
    }
    return 0;
}

/*RIfAt*/