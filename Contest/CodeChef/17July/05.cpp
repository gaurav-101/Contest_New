#include <iostream>
using namespace std;

void solve(){
    int x,y,z;
    if(x==0){
        cout<<0;
        return;
    }
    cin>>x>>y>>z;
    int a=x/3;
    int ans=x*y + (a*z);
    if(x%3 ==0){
        ans-=z;
    }
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