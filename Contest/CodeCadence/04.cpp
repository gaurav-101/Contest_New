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
      int sum =0;
      int maxi = 0;
      for(int i=0;i<n;i++)
      {
          sum += a[i];
          maxi = max(maxi,sum);
          if(sum<0) sum = 0;
      }
      cout<<maxi<<endl;
  }
}