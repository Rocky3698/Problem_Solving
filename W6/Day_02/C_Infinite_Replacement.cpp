#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i,s,n)for(int i=s;i<n;i++)
typedef pair<int,int>pii;
const int INF=1e9+7;
const int N=1e5+5;
const int M=1e3+5;
int i,j;
ll solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s2=="a") return 1;

    sort(s2.begin(), s2.end());
    if(s2[0]=='a') return -1;

    return (ll)pow(2, s1.size());
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)cout<<solve()<<endl;

    return 0;
}