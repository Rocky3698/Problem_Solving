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
        int n;
        cin >> n;
        vector<int> a(n), b(n, 1);
        In_range(i, 0, n)
                cin >>
            a[i];

        vector<vector<int>> IJ(101);
        In_range(i, 0, n)
            IJ[a[i]]
                .push_back(i);

        int con = 2;
        In_range(i, 1, 101)
        {
            if (IJ[i].size() > 1)
            {
                b[IJ[i][0]] = con++;
                if (con > 3)
                    break;
            }
        }

        if (con > 3)
            for (int x : b)
                cout << x << " ";
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}