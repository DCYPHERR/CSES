#include <bits/stdc++.h>
#define ll long long
#define ar array
using namespace std;
const int mxN = 2e5;

int n, x;
int main()
{
    cin >> n >> x;
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (mp.find(x - a) != mp.end())
        {
            cout << mp[x - a] + 1 << " " << i + 1;
            return 0;
        }
        mp[a] = i;
    }
    cout << "IMPOSSIBLE";
    return 0;
}