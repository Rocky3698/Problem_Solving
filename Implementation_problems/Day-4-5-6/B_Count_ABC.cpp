#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i,s,n)for(int i=s;i<n;i++)
typedef pair<int,int>pii;
const int INF=1e9+7;
const int N=1e5+5;
const int M=1e3+5;
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int ABC=0;
    for(int i=2;i<n;i++){
        if(s[i-2]=='A'&&s[i-1]=='B'&&s[i]=='C')ABC++;
    }
    cout<<ABC<<endl;
    return 0;
}