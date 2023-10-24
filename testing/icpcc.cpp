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
        int n,k;
        cin>>n>>k;
        vector<string>vs;
        For(i,0,n){
            string s;
            cin>>s;
            vs.push_back(s);
        }
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            bool even=false;
            if(vs[0][0]=='0')even=true;
            l++;
            r++;
            int ans=0;
            while(l%k!=0){
                l++;
                if((l/k)%2==0&&even)ans++;
            }
            while(r%k!=0){
                r--;
                if((r/k)%2==0 && even)ans++;
            }
            int tmp=r-l;
            tmp++;
            tmp*=2;
            ans+=tmp;
            
            cout<<ans<<endl;
        }
    }

    return 0;
}