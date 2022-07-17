#include <iostream>
#include<map>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    string str;
    cin>>str;
    map<char,int> m;
    for(int i=0;i<n;i++){
        if(m[str[i]]){
            m[str[i]]++;
        }
        else{
            m[str[i]]=1;
        }
        i++;
    }
    
    for(int i=1;i<n;i++){
        if(m[str[i]]){
            m[str[i]] -=1;
        } 
        else{
            cout<<"NO";
            return;
        }
        i++;
    }
    map<char, int>::iterator itr=m.begin();
    for (itr ; itr != m.end(); ++itr) { 
        if(itr->second != 0){
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