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
bool isValid(vector<int> v, int n)
{
    In_range(i, 1, n - 1)
    {
        if ((v[i] > v[i + 1] && v[i] > v[i - 1]) || (v[i] < v[i - 1] && v[i] < v[i + 1]))
            continue;
        else
            return false;
    }
    return true;
}
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
        int arr[n];
        In_range(i, 0, n) cin >> arr[i];
        sort(arr, arr + n);
        bool flag = false;
        vector<int> ans(n), ans1(n);
        int p = 0;
        In_range(i, 0, n)
        {
            if (p >= n)
                p = 1;
            ans[p] = arr[i];
            p += 2;
        }
        p = 1;
        In_range(i, 0, n)
        {
            if (p >= n)
                p = 0;
            ans1[p] = arr[i];
            p += 2;
        }
        if (isValid(ans, ans.size()))
        {
            In_range(i, 0, n)
                    cout
                << ans[i] << " ";
            cout << endl;
        }
        else if (isValid(ans1, ans1.size()))
        {
            In_range(i, 0, n)
                    cout
                << ans1[i] << " ";
            cout << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}