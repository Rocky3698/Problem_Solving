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
    bool freq[n];
    For(i,1,n+1)freq[i]=false;
    For(i,1,n){
        int x;
        cin>>x;
        freq[x]=true;
    }
    For(i,1,n+1)if(!freq[i]){
        cout<<i<<endl;
        break;
    }
    


    return 0;
}