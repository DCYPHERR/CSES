#include <iostream>
#include <string>
#include <vector>
using namespace std;

void gray(int n)
{

    if (n <= 0)
        return;

    vector<string> a;

    a.push_back("0");
    a.push_back("1");

    int i, j;
    for (i = 2; i < (1 << n); i = i << 1)
    {

        for (j = i - 1; j >= 0; j--)
            a.push_back(a[j]);

        for (j = 0; j < i; j++)
            a[j] = "0" + a[j];

        for (j = i; j < 2 * i; j++)
            a[j] = "1" + a[j];
    }

    for (i = 0; i < a.size(); i++)
        cout << a[i] << endl;
}

int main()
{
    int n;
    cin >> n;
    gray(n);
    return 0;
}