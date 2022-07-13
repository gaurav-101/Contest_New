#include <iostream>
#include <string.h>
using namespace std;

void solve(){
    int a;
    cin>>a;
    string str;
    cin>> str;
    int temp=a;
    if(a==1){
        cout<<"YES";
        return;
    }
    while(a>3){
        if(str.substr(0,a/2)!=str.substr(a/2,a/2)){
            cout<<"NO";
            return;
        }
        a=a/2;
    }
    
    if(str[0]!=str[1]){
        cout<<"NO"; 
    }
    else{
        cout<<"YES";
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