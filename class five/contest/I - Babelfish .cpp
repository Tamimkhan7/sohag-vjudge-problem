#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define pb push_back()
#define pop pop_back()
bool check(string s)
{
    stringstream ss(s);
    int count = 0;
    string word;
    while (ss >> word)
    {
        count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}
int32_t main()
{
    MTK;
    map<string, string> mp;
    string s;
    while (getline(cin, s))
    {
        if (s.empty())
            continue;
        else if (check(s) == true)
        {
            stringstream ss(s);
            string a, b;
            ss >> a >> b; // two ta word ke alada kore niyeci
            mp[b] = a;
        }
        else
        {
            if (mp.find(s) != mp.end())
                cout << mp[s] << '\n';
            else
                cout << "eh" << '\n';
        }
    }
}
