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

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum1=0,sum2=0;
        For(i,0,3){
            int x=s[i]-'0';
            sum1+=x;
        }
        For(i,3,6){
            int x=s[i]-'0';
            sum2+=x;
        }
        if(sum1==sum2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}