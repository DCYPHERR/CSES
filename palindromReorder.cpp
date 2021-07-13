#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c[26] = {};
    int c1 = 0;
    //counting instances of alphabets in string s
    for (char d : s)
    {
        ++c[d - 'A']; //ascii value of A = 65, the difference corresponds to a particular element A-Z
    }
    for (int i = 0; i < 26; ++i)
    {
        c1 += c[i] & 1;
    }
    //performing check -> More than one alphabet having odd instances
    if (c1 > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    //We move further iff only one element has odd instances.
    string t;
    for (int i = 0; i < 26; ++i)
    {
        if (c[i] & 1 ^ 1)
            for (int j = 0; j < c[i] / 2; ++j) //even occurences split into 2 halves 
            {
                t += (char)('A' + i);
            }
    }
    cout << t;
    for (int i = 0; i < 26; ++i)
    {
        if (c[i] & 1)
        {
            for (int j = 0; j < c[i]; ++j) //odd occurences to be incorporated in the middle of o/p string
            {
                cout << (char)('A' + i);
            }
        }
    }
    reverse(t.begin(), t.end());
    cout << t;
    return 0;
}