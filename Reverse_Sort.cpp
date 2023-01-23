#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
ll mod = 1e9 + 7;
using namespace std;

/* inline bool isPalindrome(const string& s) {
    return equal(s.begin(), s.end(), s.rbegin());
}*/




int main()
{
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    ll t;
    cin >> t;
    ll x = 1;
    while(t--)
    {
        ll n;
        cin >> n;

        vll v;
        ll i,j,k;

        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }

        ll cost = 0;
        ll currmin = INT_MAX;
        ll Index = -1;
        for(i=0;i<n-1;i++)
        {
            currmin = *min_element(v.begin() + i, v.end());

            Index = find(all(v), currmin) - v.begin();

            // cout << i << " " << Index << endl;
            reverse(v.begin() + i, v.begin() + Index + 1);
            
            cost += Index - i + 1;
            
        }
        cout << "Case #" << x << ":" << " " << cost << endl;
        x++;
    }
    
    
 
	
	return 0;
}
