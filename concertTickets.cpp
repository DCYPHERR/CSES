#include <bits/stdc++.h>
#define ll long long
#define ar array
using namespace std;
const int mxN = 2e5;
int n, m, a[mxN];
int main()
{
    cin >> n >> m;
    set<ar<int, 2>> s;
    for (int i=0; i<n; ++i) {
        int a;
        cin >> a;
        s.insert({a, i});
    }
    for (int i=0; i<m; ++i) {
        int b;
        cin >> b;
        auto it = s.lower_bound({b+1, 0});
        if(it==s.begin()) {
            cout << "-1\n";
        }
        else {
            --it;
            cout << (*it)[0] << "\n"; 
            s.erase(it);
        }
    }
    return 0;
}