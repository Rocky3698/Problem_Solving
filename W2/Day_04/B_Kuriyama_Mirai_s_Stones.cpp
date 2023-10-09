#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
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

    int n, q;
    cin >> n;
    vector<int> v(n), preV(n);
    vector<int> u(n), preU(n);
    For(i, 0, n)
    {
        cin >> v[i];
        u[i] = v[i];
        if (i == 0)
            preV[i] = v[i];
        else
            preV[i] = preV[i - 1] + v[i];
    }
    sort(u.begin(), u.end());
    For(i, 0, n)
    {
        if (i == 0)
            preU[i] = u[i];
        else
            preU[i] = preU[i - 1] + u[i];
    }

    cin >> q;
    while (q--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        l--;
        r--;
        if (type == 1)
        {
            if (l)
                cout << preV[r] - preV[l - 1] << endl;
            else
                cout << preV[r] << endl;
        }
        else
        {
            if (l)
                cout << preU[r] - preU[l - 1] << endl;
            else
                cout << preU[r] << endl;
        }
    }

    return 0;
}