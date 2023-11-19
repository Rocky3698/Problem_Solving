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

    int n;
    cin >> n;
    vector<int> v(n);
    In_range(i, 0, n) cin >> v[i];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = lower_bound(v.begin(), v.end(), x) - v.begin() - 1;
        int u = upper_bound(v.begin(), v.end(), x) - v.begin();
        if (u == n)
            cout << v[l] << " "
                 << "X" << endl;
        else if (l < 0)
            cout << "X"
                 << " " << v[u] << endl;
        else
            cout << v[l] << " " << v[u] << endl;
    }

    return 0;
}