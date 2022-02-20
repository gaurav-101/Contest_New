#include<iostream>
#include<vector>
using namespace std;

vector< vector<int> > getAllSubsets(vector<int> set)
{
    vector< vector<int> > subset;
//     vector<int> empty;
//     subset.push_back( empty );

    for (int i = 0; i < set.size(); i++)
    {
        vector< vector<int> > subsetTemp = subset;  //making a copy of given 2-d vector.

        for (int j = 0; j < subsetTemp.size(); j++)
            subsetTemp[j].push_back( set[i] );   // adding set[i] element to each subset of subsetTemp. like adding {2}(in 2nd iteration  to {{},{1}} which gives {{2},{1,2}}.

        for (int j = 0; j < subsetTemp.size(); j++)
            subset.push_back( subsetTemp[j] );  //now adding modified subsetTemp to original subset (before{{},{1}} , after{{},{1},{2},{1,2}}) 
    }
    return subset;
}


int closestCost(int N, int M, int X, vector<int> W, vector<int> G)
{
    vector<int> set;
    
    for(int i=0;i<M;i++){
        for(int j=0;j<2;j++){
            set.push_back(G[i]);
        }
    }
    vector< vector<int> > vect=getAllSubsets(set);
    
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }
	cout<<endl<<endl<<endl;
    
    int diff=X;
    int ans;
    int sum=0;
    cout<<ans<<endl;
    for(int l=0;l<N;l++){
        for (int i = 0; i < vect.size(); i++)
        {
            sum=W[l];
            for (int j = 0; j < vect[i].size(); j++)
            {
                sum+= vect[i][j];
            }   
            if(diff>(abs(X-sum))){
                ans=sum;
                diff=abs(X-sum);
            }
            if(diff>(abs(X-W[l]))){
                ans=W[l];
                diff=abs(X-W[l]);
            }
    	}
    }
    return ans;
}

int main(){
    int N,M,X;
    vector<int> W;
    vector<int> G;
    cin>>N>>M>>X;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        W.push_back(temp);
    }
    for(int i=0;i<M;i++){
        int temp;
        cin>>temp;
        G.push_back(temp);
    }
    cout<<closestCost(N,M,X,W,G);
    return 0;
}