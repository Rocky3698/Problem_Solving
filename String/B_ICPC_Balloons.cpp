#include <bits/stdc++.h>
 using namespace std;
 #define endl "\n"
 int main()
 {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

     int t;
     cin >> t;
     while (t--)
     {
         int size;
         string s;
         vector<int> freq(26, 0);

         cin >> size;
         for (int i = 0; i < size; i++)
         {
             char c;
             cin >> c;
             freq[c - 'A']++;
         }
         int sum = 0;
         for (int i = 0; i < 26; i++)
         {
             // cout<<char(i+'a')<<"-> "<< freq[i]<<endl;
             if (freq[i])
             {
                 sum += freq[i] + 1;
             }
         }

         cout << sum << endl;
     }

     return 0;
}
//#include <bits/stdc++.h>
//using namespace std;
//void fun(int *&p){
//    p = NULL;
//}
//int main() {
//    int val = 10;
//    int *ptr = &val;
 //   fun(ptr);
//    cout << *ptr << endl;
 //   return 0;
//}
