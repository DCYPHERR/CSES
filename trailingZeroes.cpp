#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 5; n / i >= 1; i *= 5)
    {
        ans += n / i;
    }
    cout << ans;
    return 0;
}