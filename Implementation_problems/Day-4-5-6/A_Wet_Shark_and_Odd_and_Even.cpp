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
    int c=0;
    long long ans=0;
    int m=INT_MAX;
    For(i,0,n){
        int x;
        cin>>x;
        if(x%2){
            c++;
            if(x<m)m=x;
        }
        ans+=x;
    }
    if(c%2==0)cout<<ans<<endl;
    else cout<<ans-m<<endl;

    return 0;
}