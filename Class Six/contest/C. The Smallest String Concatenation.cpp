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
bool cmp(string a, string b)
{
    return a + b < b + a;
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)
        cout << s[i];
    cout << '\n';
}