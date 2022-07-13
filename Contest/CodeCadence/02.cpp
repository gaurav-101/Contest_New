#include <iostream>
using namespace std;


int solve(){
    int a,b,c;
    int ans;
    cin>>a>>b>>c;
    ans=(a/b);
    if(a%b != 0){
        ans++;
    }
    return ans * c;
}
int main() {
    int loop;
	cin>>loop;
	while(loop!=0){
	    cout<<solve()<<endl;
	    loop--;
	}
	return 0;
}
