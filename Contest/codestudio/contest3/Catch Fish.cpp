int minimumNet(int n, int k, vector<bool> fish)
{
    vector <int> indexArray;
    for(int i=0;i<n;i++){
        if(fish[i]==1){
            indexArray.push_back(i);
        }
    }
    int s=0, e=indexArray.size();
    int tempSize=0;
    int ans=999999;
    if(e<k){
        return -1;
    }
    while(s<=e-k){
        tempSize=indexArray[s+k-1] - indexArray[s];
        if(ans>tempSize){
            ans=tempSize;
        }
        s++;
    }
    return ans+1;
}