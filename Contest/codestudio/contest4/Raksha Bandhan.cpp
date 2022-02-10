int rakshaBandhan(vector < int > arr, int n) {
    sort(arr.begin(),arr.end());
    int long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=n, i=0;
    while(sum<=0 && i<n){
        sum-=arr[i];
        i++;
        ans--;
    }
    return ans;
}