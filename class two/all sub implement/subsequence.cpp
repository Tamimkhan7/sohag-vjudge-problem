#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int mask = 0; mask < (1 << n); mask++)
    {
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}