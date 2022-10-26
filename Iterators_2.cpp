#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {2,3,5,6,7};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    /* vector<int> ::iterator it = v.begin();
    while(it!=v.end()){
        cout<<*it<<" ";
        it++;
    }cout<<endl; */
    vector<pair<int,int>>v_p= {{1,2},{2,3}};
    for(pair<int,int> &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    for(int &value : v){
        cout<<value<<" ";
    }cout<<endl;
    
    auto it = v.begin(); // auto variable automatically determines the data type
    while(it!=v.end()){
        cout<<*it<<" ";
        it++;
    }cout<<endl;
    return 0;
}