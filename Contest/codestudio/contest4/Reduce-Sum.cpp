#include <bits/stdc++.h>
bool cond(int arr[],int m){
    
    for(int i=0; i<m-1; i++){
        if(arr[m-1]<=arr[i]){
            return 1;
        }
    }
    return 0;
}

void ans(int n, int m, vector<vector<int>>& mat,int &count)
{
    int arr[m];
    for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum+=mat[j][i];
        }
        arr[i]=sum;
    }
    
//     for(int i=0; i<m; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    if(cond(arr,m)==1){
        return;
    }
    
    
    int index=0, maxi=mat[0][m-1];
    for(int i=0; i<n; i++){
        if(maxi<mat[i][m-1]){
            index=i;
            maxi=mat[i][m-1];
        }
    }
    for(int i=0; i<m; i++){
        mat[index][i]=0;
    }
    count+=1;
    ans(n,m,mat,count);
}

int countMinOp(int n, int m, vector<vector<int>>& mat){
    int count=0;
	ans(n,m,mat,count);
    return count;
}

