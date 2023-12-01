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
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        int f[26] = {0};
        for (char c : s)
            f[c - 'a']++;

        int c = 0, pal = 0;
        In_range(i, 0, 26)
        {
            if (f[i])
                c++;
        }
        if (s.size() % 2)
        {
            if (c == 1)
            {
                cout << "2" << endl;
                continue;
            }
            int odd = 0;
            In_range(i, 0, 26)
            {
                if (f[i] % 2)
                    odd++;
            }
            if (odd == 1)
                pal++;
        }
        else
        {
            if (c == 1)
            {
                cout << "1" << endl;
                continue;
            }
            bool flag = 1;
            In_range(i, 0, 26)
            {
                if (f[i] % 2)
                    flag = 0;
            }
            if (flag)
                pal++;
        }
        cout << (pal ? 1 : 0) << endl;
    }

    return 0;
}