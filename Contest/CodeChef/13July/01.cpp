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
