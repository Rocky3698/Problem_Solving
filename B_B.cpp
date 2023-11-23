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
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        In_range(i,0,n)cin>>arr[i];
        vector<int>v;
        int c=0;bool flag=false;
        In_range(i,0,n){
            if(arr[i]==1){
                if(c)v.push_back(c);
                c=0;flag=true;
            }
            if(flag&&arr[i]==0) c++;
        }
        int ans=0;
        for(int i:v)ans+=i;
        cout<<ans<<endl;
    }

    return 0;
}