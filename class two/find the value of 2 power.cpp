#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int check_value(int x, int k)
{                        // x ar last digit ak ak kore ber korteci then check korteci if last digit true then return 1 otherwise return 0 and and operator use the value of and
    return (x >> k) & 1; // last digit check//that means holo x ar value ta bar bar right ar dike jabe//tahole ami last ar value ta pabo
}
int cout_on_bits(int x)
{
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        if (check_value(x, i))
            ans++; // if last digit is true then count the number
    }
    // cout << ans << endl;//that's means ans ar value jodi 1 hoy tahole oi value ta 2 ar power, otherwise oi value 2 ar power na
    return ans;
}
bool poweoftwo(int x)
{
    return (cout_on_bits(x) == 1);
}
int main()
{
    faster;
    int x = 16; // x ar value ta 2 ar power kina tai check korteci
    cout << poweoftwo(x) << endl;

    return 0;
}