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
bool isValid(ll ans, ll s){
    ll tmp= ans,sum=0;
    while(tmp!=0){
        int dig=tmp%10;
        tmp/=10;
        sum+=dig;
    }
    return (ans-sum)>=s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,s;
    cin>>n>>s;
    ll l=0,r=n,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(isValid(mid,s)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<(ans?n-ans+1:ans)<<endl;
    return 0;
}