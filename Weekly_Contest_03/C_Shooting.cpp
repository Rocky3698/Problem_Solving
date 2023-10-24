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
bool cmp(pii a,pii b){
    return a.first>b.first;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<pii> v;
    In_range(i, 0, n)
    {
        int x;
        cin >> x;
        v.push_back({x, i + 1});
    }
    sort(v.begin(), v.end(), cmp);
    ll ans = 1;
    In_range(i, 1, n)
    {
        ans += (i * v[i].first + 1);
    }
    cout << ans << endl;
    In_range(i, 0, n) cout << v[i].second << " ";

    return 0;
}