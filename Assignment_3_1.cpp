#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define ps(x,y)  fixed<<setprecision(y)<<x
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

template<typename T>
bool allEqual(std::vector<T> const &v) {
    if (v.size() == 0) {
        return false;
    }
    return std::equal(v.begin() + 1, v.end(), v.begin());
}

ll num_uniq(vector<ll> v)
{
    sort(all(v));
    return distance(v.begin(),unique(v.begin(), v.end()));
}

// xor of a number x with a number with all 1's gives the number with every bit of x flipped.
ll bit_all_1 = 4294967295;


// Very large power very large number modulo...
ll long_power_long(ll x, ll n)
{
    ll result = 1;
    while (n) {
        if (n & 1)
            result = result * x % mod;
        n = n / 2;
        x = x * x % mod;
    }
    return result;
}



// TO REMOVE ALL NUMS ALSO THEN USE "isalpha" instead of "isalnum".
// To apply this -> str.erase(it,str.end());

/*
auto it = std::remove_if(str.begin(), str.end(), [](char const &c) {
        return !std::isalnum(c);
    });
*/

// std::rotate(nums.begin(),nums.begin() + n-(k%n), nums.end()); to rotate vector to right k steps.
// if we want an element at index 'Z' to become 1st element after rotations we replace n-(k&n) with z;




int main()
{
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    ll t;
    cin >> t;


    while(t--)
    {
        ll n,q;
        cin >> n >> q;

        vll v;

        ll i,j,k;
        
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }
        vll v1;
        v1 = v;
        reverse(v1.begin(),v1.end());
        ll c = 0;
        while(q--)        
        {
            ll si,sj;

            cin >> si >> sj;

            // cout << find(all(v),si) - v.begin() << " ";

            ll p1 = n - 1 - (find(all(v1), sj) - v1.begin());
            // ll p2 = find(all(v1), sj) - v1.begin();

            ll p3 = find(all(v), si) - v.begin();
            // ll p4 = find(all(v), sj) - v.begin();

            // cout << p3 << " " << p1 << " ";

            if(p3 <= p1)
            {
                c++;
            }
            // cout << c << endl;
        }
        cout << c << endl;


    }




	return 0;
}
