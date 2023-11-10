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
        string s;
        cin >> s;
        int n, z, last = -1;
        n = z = s.size();
        In_range(i, 0, z)
        {
            if (s[i] == '0')
            {
                z = i + 1;
                break;
            }
            if (s[i] == '1')
                last = i + 1;
        }
        if (n == 1 || last == n)
            cout << 1;
        else if (last < 0)
            cout << z;
        else
            cout << z - last + 1;
        cout << endl;
    }

    return 0;
}