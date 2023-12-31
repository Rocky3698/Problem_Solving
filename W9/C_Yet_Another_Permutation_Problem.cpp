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
        ll n;
        cin >> n;
        map<ll, bool> m;
        In_range(i, 1, n + 1)
        {
            if (m[i])
                continue;
            for (int j = i; j <= n; j *= 2)
            {
                cout << j << " ";
                m[j] = true;
            }
        }
        cout << endl;
    }

    return 0;
}