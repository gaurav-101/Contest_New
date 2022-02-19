#include <iostream>
#include<cmath>
using namespace std;

int solve(int anss[], int n){
    int i=(n-1)/2;
    int ans=0;
    int curr=i;
    int loop=0;
    while(i>=0){
        loop++;
        curr=i;
        while(anss[i]==1){
            i--;
            if(loop>1){
                ans+=2;
            }
        }
        if(i<curr-1){
            ans+=1;
        }
        while(anss[i]==0){
            i--;
        }
    }
    return ans;
}

int ans(int arr1[], int arr2[], int n){
    int *anss=new int[n];
    for(int i=(n-1)/2; i>=0; i--){
         if(arr1[i]==arr2[n-1-i] && arr1[n-1-i]==arr2[i]){
            anss[i]=1;
            anss[n-i-1]=1;
        }
        else if(arr1[i]==arr2[i] && arr1[n-1-i]==arr2[n-1-i]){
            anss[i]=0;
            anss[n-i-1]=0;
        }
        else{
            return -1;
        }
    }
    return solve(anss,n);
}

void mainn(){
        int n;
        cin>>n;
        int *arr1=new int[n];
		int *arr2=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
		for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        cout<<ans(arr1,arr2,n)<<endl;
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