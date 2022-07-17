#include <iostream>
using namespace std;

void solve(){
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<< min(x1+y1,x2+y2);
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