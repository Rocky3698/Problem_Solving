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

    vector<int> v(101);
    v[0] = 0;
    In_range(i, 1, 101)
        v[i] = v[i - 1] + i;

    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        int arr[m], sum = s;
        set<int> uniq;
        In_range(i, 0, m)
        {
            cin >> arr[i];
            uniq.insert(arr[i]);
        }
        for (auto x : uniq)
            sum += x;
        bool flag = true;
        if (find(v.begin(), v.end(), sum) == v.end())
            flag = false;
        int x = (sqrt((8 * sum))) / 2;
        vector<bool> ans(x + 1, true);
        for (int i = 0; i < m && flag; i++)
        {
            if (arr[i] > 0 && arr[i] <= x && ans[arr[i]])
                ans[arr[i]] = false;
            else
                flag = false;
        }
        flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

    return 0;
}