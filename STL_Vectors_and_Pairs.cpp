#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string>&v){
    cout<<"Size :"<<" "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    //v.push_back(2); //This does not alter the vector in the main function if not done using reference while function definition
    cout<<endl;
}

int main()
{
    //pair<int,string> p; 
    /* p = make_pair(2, "abc");
    p = {2,"abcd"};
    pair<int,string> &p1 = p;
    p1.first = 3;
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    } */
    /* cin>>p.first;
    cout<<p.first; */
/*     vector<int>v; //Initially size is 0
    //vector<int>v(5); //Initially size is 5 with each value as 0
    //vector<int>v(5,3); //Initially size is 5 with each value as 3
    /* int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x); //Time complexity = O(1)
    } */
    /*v.push_back(7); // 7 would be added at the end of the vector increasing its size by 1.
    v.push_back(6);
    /* v.pop_back(); // removes the value from the last
    printVec(v); */
    /*vector<int> v2=v; //copies the vector with time complexity = O(2)
    v2.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2); */
    vector<string>v;
    int n;
    cin>>n;
    for(int i =0 ;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    printVec(v);
    return 0;
}