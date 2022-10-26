#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v){
    cout<<"Size :"<<" "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    /* vector<pair<int,int>>v;
    printVec(v);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec(v); */
    int N;
    cin>>N;
    /* //vector<int>v[N]; //vector of arrays
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    } */
    vector<vector<int>>v; //vector of vectors
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    v.push_back(vector<int>());
    for(int i =0;i<v.size();i++){
        printVec(v[i]);
    }
    return 0;
}