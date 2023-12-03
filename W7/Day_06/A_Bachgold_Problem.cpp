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
vector<ll>divisors;
void FindDivisors(ll n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if((n/i)!=i)divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(),divisors.end());
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        In_range(i, 0, n / 2) cout << 2 << " ";
        cout << endl;
    }
    else
    {
        cout << (n / 2) << endl;
        In_range(i, 0, (n / 2) - 1) cout << 2 << " ";
        cout << "3" << endl;
    }

    return 0;
}