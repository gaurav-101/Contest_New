long long appleAndCoupon(int n, int m, vector<int> arr){
    sort( arr.begin(),arr.end());
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    long long ans=sum-arr[n-m];
    return ans;
}