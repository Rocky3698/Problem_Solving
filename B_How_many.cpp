#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j, k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ans = 0;
    int s, p;
    cin >> s >> p;
    For(i, 0, 101)
        For(j, 0, 101)
            For(k, 0, 101) if (i + j + k <= s && i * j * k <= p) ans++;

    cout << ans << endl;
    return 0;
}