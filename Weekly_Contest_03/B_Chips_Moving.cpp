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

    int n;
    cin >> n;
    int ev = 0, od = 0;
    In_range(i, 0, n)
    {
        int x;
        cin >> x;
        (x % 2) ? od++ : ev++;
    }
    cout << min(ev, od) << endl;

    return 0;
}