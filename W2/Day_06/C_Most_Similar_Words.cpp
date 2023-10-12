#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;

int dif(string s1, string s2)
{
    int d = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            d += abs(s1[i] - s2[i]);
    }
    return d;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin>>t;
    // while(t--){
    //     int n,m,ans=INT_MAX;
    //     cin>>n>>m;
    //     vector<int>v;
    //     while(n--){
    //         string s;
    //         cin>>s;
    //         int value=0;
    //         for(char c:s)value+=(int)(c);
    //         v.push_back(value);
    //         cout<<value<<endl;
    //     }
    //     For(i,0,v.size()-1)
    //         For(j,1,v.size())
    //             ans=min(ans,abs(v[i]-v[j]));
    //     // cout<<ans<<endl;
    // }
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> vs;
        For(i, 0, n)
        {
            string str;
            cin >> str;
            vs.push_back(str);
        }
        int ans = INT_MAX;
        For(i, 0, n - 1)
        {
            For (j, i + 1, n)
            {
                ans = min(ans, dif(vs[i], vs[j]));
                if (ans == 0)
                    break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}