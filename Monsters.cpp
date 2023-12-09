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
    int n = 1e6;
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (primes[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                primes[j] = false;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // In_range(i,0,n+1)cout<<primes[i]<<" ";
        // cout<<endl;
        long long pow = 1, h = n, c = 0;
        while (1)
        {
            if (h < 0)
            {
                cout << -1 << endl;
                break;
            }
            if (primes[h])
            {
                cout << c + 1 << endl;
                break;
            }
            if (h == 0)
            {
                cout << c << endl;
                break;
            }
            c++;
            h -= pow;
            pow *= 2;
        }
    }

    return 0;
}

