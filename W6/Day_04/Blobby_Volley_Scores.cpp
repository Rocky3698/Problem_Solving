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
        int n, a, b, p;
        string s;
        cin >> n >> s;
        a = b = p = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                p ? b++ : p++;
            }
            else
            {
                p ? p-- : a++;
            }
        }
        cout << a << " " << b << endl;
    }

    return 0;
}