#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string a1,b1;
    cin>>a1>>b1;
    size_t found=a1.find('1');
    if(n==2&&a1=="00"&&b1=="11")
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool hi=false;
        for(int i=1;i<n;i++)
        {
            if(b1[i]==b1[i-1])
            {
                hi=true;
                break;
            }
        }
        if(hi)
        {
            if(a1==b1)
            {
                cout<<"YES"<<endl;
            }
            else if(found==string::npos)
            {
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
        }
        else
        {
            if(a1==b1)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
}

int main() {
	int n;
	cin>>n;
	while(n--){
	    solve();
	}
	return 0;
}
