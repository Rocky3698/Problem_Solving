#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, n, w;
    cin >> k >> n >> w;
    long long cost = 0;
    for (int i = 1; i <= w; i++)
    {
        cost += (i * k);
    }
    if (cost > n)
        cout << cost - n << endl;
    else
        cout << "0" << endl;
    return 0;
}