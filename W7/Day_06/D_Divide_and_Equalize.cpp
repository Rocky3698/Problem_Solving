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
        int arr[n];
        In_range(i, 0, n) cin >> arr[i];
        map<int, int> cnt;
        In_range(j, 0, n)
        {
            int curr = arr[j];
            for (i = 2; i * i <= curr; i++)
            {
                while (curr % i == 0)
                {
                    cnt[i]++;
                    curr /= i;
                }
            }
            if(curr>1)cnt[curr]++;
        }
        bool flag=true;
        for (auto [x, y] : cnt)if(y%n!=0)flag=false;
            // cout << x << " " << y << endl;
            cout<<(flag?"YES":"NO")<<endl;
    }

    return 0;
}