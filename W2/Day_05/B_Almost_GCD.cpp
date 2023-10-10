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

    int n,gcd,gc=0;
    cin>>n;
    int arr[n];
    For(i,0,n)cin>>arr[i];
    vector<int>v(1001,0);
    For(i,2,1001){
        For(j,0,n){
            if(arr[j]%i==0)v[i]++;
            if(v[i]==n){
                cout<<i<<endl;
                return 0;
            }
        }
        if(v[i]>gc){
            gc=v[i];
            gcd=i;
        }
    }
    cout<<gcd<<endl;

    return 0;
}