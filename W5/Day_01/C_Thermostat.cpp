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
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        if (a == b)
        {
            cout << "0" << endl;
            continue;
        }
        if (abs(a - b) >= x)
        {
            cout << "1" << endl;
            continue;
        }
        if (x > (r - a) && (a - l) < x)
        {
            cout << "-1" << endl;
            continue;
        }
        if (a < b)
        {
            if ((b + x <= r) || (a - x >= l))
            {
                cout << "2" << endl;
                continue;
            }
            if ((a + x <= r) && (b - x >= l))
            {
                cout << "3" << endl;
                continue;
            }
            cout << "-1" << endl;
            continue;
        }
        else
        {
            if ((a + x <= r) || (b - x >= l))
            {
                cout << "2" << endl;
                continue;
            }
            if ((b + x <= r) && (a - x >= l))
            {
                cout << "3" << endl;
                continue;
            }
            cout << "-1" << endl;
            continue;
        }
    }

    return 0;
}