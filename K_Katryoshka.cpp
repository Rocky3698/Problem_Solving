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

    ll e, m, b;
    cin >> e >> m >> b;
    ll dall = 0;
    dall = min(e, min(m, b));
    e -= dall;
    m -= dall;
    b -= dall;
    e /= 2;
    dall += min(e, b);
    cout << dall << endl;

    return 0;
}