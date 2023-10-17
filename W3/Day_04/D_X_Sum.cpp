#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int n, m;
int arr[201][201];
bool isValid(int i, int j)
{
    return (i >= 0 && i < n) && (j >= 0 && j < m);
}
vector<pii> dirr = {{1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
long long sum(int I, int J)
{
    int i = I, j = J;
    long long s = arr[i][j];
    for (auto p : dirr)
    {
        while (isValid(i += p.first, j += p.second))
            s += arr[i][j];

        i = I;
        j = J;
    }
    return s;
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

        cin >> n >> m;
        For(i, 0, n)
                For(j, 0, m)
                    cin >>arr[i][j];

        long long ans = 0;
        
        For(i, 0, n)
            For(j, 0, m)
                ans = max(ans, sum(i, j));
            
        
        cout << ans << endl;
    }
    return 0;
}