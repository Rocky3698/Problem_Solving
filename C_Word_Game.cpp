#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
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
        vector<string>v1,v2,v3;
        map<string,int>mp;
        For(i, 0, n)
        {
            string x;
            cin >> x;
            v1.push_back(x);
            mp[x]++;
        }
        For(i, 0, n)
        {
            string x;
            cin >> x;
            v2.push_back(x);
            mp[x]++;
        }
        For(i, 0, n)
        {
            string x;
            cin >> x;
            v3.push_back(x);
            mp[x]++;
        }
        int a=0,b=0,c=0;
        For(i,0,v1.size()){
            if(mp[v1[i]]==1)a+=3;
            else if(mp[v1[i]]==2)a+=1;
            if(mp[v2[i]]==1)b+=3;
            else if(mp[v2[i]]==2)b+=1;
            if(mp[v3[i]]==1)c+=3;
            else if(mp[v3[i]]==2)c+=1;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}