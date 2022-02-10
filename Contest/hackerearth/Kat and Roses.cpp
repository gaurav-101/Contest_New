#include <iostream>
#include<cmath>
using namespace std;

long long factorial(int n) {
    long long factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int ans(long long arr[],int n){
    for(int i=0; i<n; i++){
        arr[i]= log2(arr[i]);
    }
    int odd=0;
    int even=0;
    int answer=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    answer=(int)(pow(2,even) -1) % (1000000007);
    answer=(answer+ ((int)(pow(2,odd-1) -1) % (1000000007))) % (1000000007);
    for(int i=1;i<=even;i++){
        for(int j=2;j<=odd; j+=2){
            answer= (answer+ (((nCr(even,i))%(1000000007)) * ((nCr(odd,j))%(1000000007)))%(1000000007))%(1000000007);
        }
    }
    return answer;
}
void mainn(){
        int num;
        cin>>num;
        long long *arr=new long long [num];
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        cout<<ans(arr,num)<<endl;
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