#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e6;
const int M = 1e3 + 5;
int i, j;

bool solve()
{
    ll x;
    cin >> x;
    if (x < 2)
        return false;

    if (x < N)
        cout << 1 << " " << 1 << " " << x - 1;
    else if (x % N)
        cout << N << " " << x / N << " " << x % N;
    else
        cout << N << " " << x / N - 1 << " " << N;
    cout << endl;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        if (!solve())
            cout << -1 << endl;

    return 0;
}
