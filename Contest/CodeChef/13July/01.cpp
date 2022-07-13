#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--){
      ll n ;
      cin>>n;
      vector<ll> v(n);
      map<ll,ll> m;
      for(ll i = 0 ; i< n; i++){
          cin>>v[i];
          m[v[i]]++;
      }
      ll count = 0;
     bool mor1 = false;
     bool mor2 = false;
      
      for(auto p:m){
          if(p.second == 1){
              count++;
              
          }
          if(p.second>2){
              
              mor2 = true;
                  
              
          }
          if(p.second> 1 ){
              mor1 = true; 
          }
          
      }
      if(count == 1 and (m.rbegin())->second == 1 ){
          if(mor2){
              cout<<1;
          }
          else cout<<2;
          cout<<endl;
      }
      else{
      cout<<(count+1)/2<<endl;
      }
      
      
  }
  return 0;
}
//similar height}



// // MY WAY (ONE CASE INCORRECT)
// #include <iostream>
// #include<map>
// using namespace std;

// void solve(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i=0;i<a;i++){
//         cin>> arr[i];
//     }
//     map<int, int> M;
//     for (int i = 0; i<a; i++) {
 
//         if (M.find(arr[i]) == M.end()) {
//             M[arr[i]] = 1;
//         }
 
//         // Else update the frequency
//         else {
//             M[arr[i]]++;
//         }
//     }
//     map<int, int>::iterator itr;
//     int count=0;
//     for (itr = M.begin(); itr != M.end(); ++itr) {
//         if(itr->second==1){
//             count++;
//         }
//     }
//     int ans;
//     if(count>0){
//         if(count%2==0){
//             ans=count/2;
//         }
//         else{
//             ans=(count/2)+1;
//         }
//     }
//     else{
//         ans=0;
//     }
//     cout<<ans;
// }
// int main() {
// 	int n;
// 	cin>>n;
// 	while(n--){
// 	    solve();
// 	    cout<<endl;
// 	}
// 	return 0;
// }
