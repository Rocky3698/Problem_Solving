#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;

vector<int> p;
void PreSet()
{
    for (int i = 0; i < (1 << 15); i++)
    {
        string s = to_string(i);
        string x = s;
        reverse(x.begin(), x.end());
        if (s == x)
            p.push_back(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    PreSet();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        unordered_map<ll, ll> m;
        In_range(i, 0, n)
                cin >> a[i];
        ll ans = 0;
        for (auto i : a)
        {
            m[i]++;
            for (auto j : p)
            {
                ans += m[(i ^ j)];
            }
        }
        cout << ans << endl;
    }

    return 0;
}