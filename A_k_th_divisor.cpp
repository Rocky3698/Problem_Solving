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
set<ll> divs;
vector<ll> divisors;
void FindDivisors(ll n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.insert(i);
            if ((n / i) != i)
                divs.insert(n / i);
        }
    }
    divisors.assign(divs.begin(), divs.end());
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;
    FindDivisors(n);
    if (divisors.size() >= k)
        cout << divisors[k - 1] << endl;
    else
        cout << -1 << endl;

    return 0;
}