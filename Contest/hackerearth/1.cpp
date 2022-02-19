#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int ans(int x,int y, int count){
    if(x==0&y==0){
        return count;
    }
    if(x>0)
}
void mainn(){
        int x,y;
        cin>>x>>y;
        if(x==0&y==0){
            return 0;
        }
        int count=0;
        cout<<ans(x,y,count)<<endl;
}

int main() {
    int loop;
    // int num;
    cin>>loop;
    for(int i=0; i<loop; i++){
        mainn();
    }
    return 0;
}