// https://www.hackerrank.com/contests/coderush-iiit-dharwad-2022/challenges/easy-transform/submissions/code/1341823999

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    int ans=min(odd,even);
    cout<<ans;
    return 0;
}