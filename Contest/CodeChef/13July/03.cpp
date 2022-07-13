#include <iostream>
using namespace std;

void solve(){
    int a;
    cin>>a;
    
    if(a==1 or a==3 or a==5)
        cout<<"NO";
    
        
    else
        cout<<"YES";
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