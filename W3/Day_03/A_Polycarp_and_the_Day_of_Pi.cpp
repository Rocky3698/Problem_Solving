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

    string pii="314159265358979323846264338327";
    int t;
    cin>>t;
    while(t--){
        string s;int c=0;
        cin>>s;
        For(i,0,s.size()){
            if(s[i]==pii[i])c++;
            else break;
        }
        cout<<c<<endl;
    }

    return 0;
}