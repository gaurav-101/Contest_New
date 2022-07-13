#include <iostream>
using namespace std;

void solve(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>> arr[i];
    }
    
    int j=0,k=0;
    int maxi=-1000000;
    int mini=1000000;
    for(int i=0;i<a;i++){
        if(arr[i]>maxi){
            k=i;
            maxi=arr[i];
        }
        if(arr[i]<mini){
            j=i;
            mini=arr[i];
        }
    }
    int ans=(j)+ (a-1-k);
    if(j>k){
        cout<<ans-1; 
    }
    else{
        cout<<ans;
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