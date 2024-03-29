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
const int N = 1e5 + 9;
int n, k, a[N];
void solve()
{
    int x;
    cin >> x;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            cout << "YES" << '\n';
            return;
        }
        else if (a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "NO" << '\n';
}
int32_t main()
{
    MTK;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    while (k--)
        solve();
}