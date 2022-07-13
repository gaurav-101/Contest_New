#include <iostream>
#include <algorithm>
using namespace std;

void next(vector<int>& a) {
    int index=-1;
    int n=a.size();
    for (int i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(a.begin(),a.end());
    }
    else{
        int prev=index;
        for(int i=index+1;i<n;i++){
            if(a[i]>a[index-1] and a[i]<=a[prev]){
                prev=i;
            }
        }
        swap(a[index-1],a[prev]);
        reverse(a.begin()+index,a.end());
    }
}
    
void solve(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    next(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}    
int main() {
	int loop;
	cin>>loop;
	while(loop!=0){
	    solve();
	    loop--;
	}
	return 0;
}
