#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
bool cmp(pii a, pii b)
{
    if (a.first > b.first)
        return true;
    else if (a.first == b.first)
    {
        if (a.second > b.second)
            return true;
        else
            return false;
    }
    else
        return false;
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
        vector<pii> v;
        For(i, 0, n)
        {
            int x;
            cin >> x;
            v.push_back({x, i + 1});
        }
        sort(v.begin(), v.end(), cmp);
        vector<int>vi;
        For(i,0,n-1){
            if(v[i].first==v[i+1].first)continue;
            else vi.push_back(abs(v[i].second-v[i+1].second));
        }
        for(int a:vi)cout<<a<<endl;
        
    }

    return 0;
}