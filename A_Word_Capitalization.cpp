#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int,int>pii;
const int INF=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    if(s[0]>='a'&&s[0]<='z')s[0]-=32;
    cout<<s<<endl;

    return 0;
}