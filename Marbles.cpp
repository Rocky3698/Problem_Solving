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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int tmpa=a,tmpb=b,ans=0;
        if(min(a,b)==0)ans=1;
        else if(a%b!=0){
            int ans1=0,ans2=0;
            while(a%b){
                if(a<=0)break;
                a--;b++;ans1++;
                
            }
            if(a==0)ans1=INT_MAX;
            while(tmpa%tmpb){
                if(tmpb<=0)break;
                tmpb--;tmpa++;ans2++;
            }
            if(tmpb==0)ans2=INT_MAX;
            ans=min(ans1,ans2);
        }
    cout<<ans<<endl;

    }

    return 0;
}