#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int k=n/2;
        reverse(a+k,a+n);
    
        vector<int> ans;
        for(int i=n/2;i<n;i++)
            ans.push_back(a[i]+b[i]);
    
        sort(ans.begin(),ans.end());
        if(n==1)cout<<a[0]+b[0]<<endl;
        else cout<<ans[0];
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
