#include <bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i, a, n) for (ll i = a; i < n; i++)
#define B(i, a, n) for (ll i = n - 1; i >= a; i--)
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k == 1)
        {
            if (n % 2 == 1)
            {
                cout << "ODD" << endl;
            }
            else
            {
                cout << "EVEN" << endl;
            }
        }
        else if (k == 2)
        {
            cout << "ODD" << endl;
        }
        else
        {
            cout << "EVEN" << endl;
        }
    }

    return 0;
}
