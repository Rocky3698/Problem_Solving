// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         long long size;
//         cin >> size;

//         long long odd = 0;
//         long long arr[size];
//         for (long long i = 0; i < size; i++)
//         {
//             cin >> arr[i];
//             if (arr[i] % 2)
//                 odd++;
//         }
//         (size % 2) ? cout << -1 << endl : cout << abs(odd - (size / 2)) << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     long long x,n;
//     cin>>x>>n;
//     long long sum=0;
//     for (long long i = 2; i <=n; i+=2)
//     {
//         sum+=pow(x,i);
//     }
//     cout<<sum<<endl;

//     return 0;
// }
