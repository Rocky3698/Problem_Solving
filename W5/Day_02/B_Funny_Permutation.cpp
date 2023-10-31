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
        int n;
        cin>>n;
        if(n==3){
            cout<<"-1"<<endl;
            continue;
        }
        if(n==5){
            cout<<"5 4 1 2 3"<<endl;
            continue;
        }
        vector<int>v;
        In_range(i,1,n+1){
            v.push_back(n-i+1);
        }
        if(n%2)
            swap(v[n/2],v[(n/2)-1]);
        for(int x:v)cout<<x<<" ";
        cout<<endl;
        
    }

    return 0;
}