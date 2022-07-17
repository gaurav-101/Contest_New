#include <iostream>
using namespace std;


void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n-3;i++){
        int j=0;
        int present=0;
        while(j<4){
            if(str[i+j]=='a' or str[i+j]=='e' or str[i+j]=='i' or str[i+j]=='o' or str[i+j]=='u'){
                present=1;
            }
            j++;
        }
        if(present==0){
            cout<<"NO";
            return;
        }
    }
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