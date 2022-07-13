#include <iostream>
using namespace std;

void solve(){
    int a;
    cin>>a;
    int ans=a%10;
    cout<<ans;
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
