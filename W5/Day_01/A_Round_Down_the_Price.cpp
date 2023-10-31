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
        bool flag = true;
        vector<char> vc;
        In_range(i, 0, s.size())
        {
            (i == 0) ? vc.push_back(--s[i]) : vc.push_back(s[i]);
            if (flag)
            {
                if (vc.back() != '0')
                    flag = false;
                else
                    vc.pop_back();
            }
        }
        if (!vc.size())
            cout << "0";
        else
            for (char a : vc)
                cout << a;
        cout << endl;
    }

    return 0;
}