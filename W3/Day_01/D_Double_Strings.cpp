#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
typedef pair<string, int> psi;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j, k, l;
bool cmp(psi a, psi b)
{
    return a.first.size() > b.first.size();
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
        string ans(n, '0');
        vector<string> vs;
        map<string,bool>mp;
        For(i, 0, n)
        {
            string s;
            cin >> s;
            mp[s]=true;
            vs.push_back(s);
        }
        // sort(vs.begin(), vs.end(), cmp);
        For(i, 0, n)
        {
            string s=vs[i];
            For(j, 0, s.size())
            {
                string x = "", y = "";
                For(k, 0, j) x += s[k];
                For(l,j,s.size())y+=s[l];
                if(mp[x]&&mp[y]){
                    ans[i]='1';
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}