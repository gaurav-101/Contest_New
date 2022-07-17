#include <iostream>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    cout<< x-y;
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