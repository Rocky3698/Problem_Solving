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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int a[n];
        vector<int> v;
        In_range(i, 0, n)
        {
            cin >> a[i];
            if ((b & a[i]) == b)
                v.push_back(a[i]);
        }
        if (!v.empty())
        {
            int ans = v[0];
            In_range(i, 1, v.size())
                ans &= v[i];
            if (ans == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}