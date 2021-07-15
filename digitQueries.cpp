#include <bits/stdc++.h>
#define ll long long
using namespace std;

//using in-built mathlib fails to pass two of the test cases
ll pown(ll x, ll y) //defined pow func
{
    x = 1;
    while (y--)
        x = x * 10;
    return x;
}

ll solve(ll k)
{
    ll s = 0, n = 1, lower_value = 0, num, rem;
    while (1)
    {
        lower_value = s;
        s = s + 9 * n * pown(10, n - 1);
        if (k <= s)
            break;
        else
            n++;
    }

    num = pown(10, n - 1) + (k - (lower_value + 1)) / n;
    rem = (k - (lower_value + 1)) % n;
    string b = to_string(num);
    cout << b[rem] << endl;
}

int main()
{

    ll q, k;
    cin >> q;
    while (q--)
    {
        cin >> k;
        solve(k);
    }
    return 0;
}