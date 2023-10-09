#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
vector<bool> prime(3001, true);
bool isAlmostPrime(int n)
{
    int c = 0;
    For(j, 2, (n / 2) + 1)
    {
        if ((n % j == 0) && prime[j]){
            cout<<j<<" ";
            c++;
        }
        if (c == 3)
            break;
    }
    cout<<endl;
    if (c == 2)
        return true;
    else
        return false;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 2; i * i < 3001; i++)
        if (prime[i])
            for (int j = i * i; j < 3001; j += i)
                prime[j] = false;

    int ans = 0;
    For(i, 6, n + 1) if (isAlmostPrime(i))
    {
        // cout << i << " ";
        ans++;
    }

    // cout << ans;

    return 0;
}