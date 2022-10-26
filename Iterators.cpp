#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {2,3,5,6,7};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> ::iterator it = v.begin();
    while(it!=v.end()){
        cout<<*it<<endl;
        it++;
    }
    /* cout<<*(it+1)<<endl; */
    // it++ --> moves to next iterator
    // it+1 --> moves to next location
    // both are same in vector cause it stores in contiguous memory location
    vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it1 = v_p.begin();
    while(it1 != v_p.end()){
        cout<<(*it1).first<< " " << (*it1).second<<endl;
        it1++;
    }
    it1 = v_p.begin();
    while(it1 != v_p.end()){
        cout<<it1->first<< " " << it1->second<<endl;
        it1++;
    }
    // (*it1).first <==> it1->first
    return 0;
}