#include <iostream>
#include<map>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        if(arr[0]==0){
            cout<<1;
        }
        else
            cout<<0;
    
        return;
    }
    long long int sum=0;
    map<int, int, greater<int> > m;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(m[arr[i]]){
            m[arr[i]]++;
        }
        else{
            m[arr[i]]=1;
        }
    }
    
    int j=0;
    map<int, int>::iterator itr=m.begin();
    while(itr!=m.end()){
        if(sum<n){
            cout<<n-j;
            return;
        }
        sum-=itr->first;
        itr->second-=1;
        if(itr->second==0){
            itr++;
        }
        j++;
    }
}

int main() {
	int n;
	cin>>n;
	while(n--){
	    solve();
	    cout<<endl;
	}
	return 0;
}