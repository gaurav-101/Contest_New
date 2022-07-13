#include <iostream>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(a>=b){
        cout<<"YES";
    }
    else
        cout<<"NO";
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
