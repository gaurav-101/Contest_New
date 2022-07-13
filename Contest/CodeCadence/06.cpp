#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
   int tc;
   cin >> tc;
   while (tc--) {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)  cin>>a[i];
      int small = INT_MAX;
      int max_profit = 0;
      for(int i=0;i<n;i++)
      {
          small = min(small,a[i]);
          max_profit = max(max_profit,a[i]-small);
      }
      cout<<max_profit<<endl;
  }
}