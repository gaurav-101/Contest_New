int function(){
    int n=arr.size();
    map<int,int> m;
    for(int i=0;i<n;i++){
        if(m[arr[i]]) m[arr[i]]++;
        else m[arr[i]]=1;
    }
    map<int, int>::iterator itr;
    int i=0;
    int sum=0;
    for (itr = m.begin(); itr != m.end(); ++itr) {
        if(i==k){
            break;
        }
        while(itr->second==0 or i==k){
            itr->second -=1;
            i++;
            sum+=itr->first;
        }
    }
    return sum;

}