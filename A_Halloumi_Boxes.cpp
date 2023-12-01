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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        In_range(i,0,n)
        {
            cin>>v[i];
        }
        i=0,j=0;
        int prev=0,c=0;
        bool flag=true;
        while(j<n-1){
            if(v[j]>=v[j+1]){
                c++;
            }
            else{
                if(c<=k-1)c=0;
                else {
                    flag=false;
                    break;
                }
                if(v[j]>=prev){
                    prev=v[i];
                    i=j+1;
                }
                else{
                    flag=false;
                    break;
                }
            }
            j++;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}