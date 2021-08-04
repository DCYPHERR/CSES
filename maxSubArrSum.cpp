#include <bits/stdc++.h>
#define ll long long
#define ar array
using namespace std;
const int mxN = 2e5;
int n;
int main()
{
    cin >> n;
    ll ans = -1e18, sfm = -1e18;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        sfm = max(0ll + a, sfm + a);
        ans = max(ans, sfm);
    }
    cout << ans;
    return 0;
}