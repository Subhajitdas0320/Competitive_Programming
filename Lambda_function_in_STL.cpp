#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
    return x>0;
}

int main()
{
    /* auto sum = [](int x,int y){return x+y;};
    cout<<sum(2,3)<<endl; */
    vector<int>v = {2,3,5};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl; // Gives true only if all the elements in the container is positive else false
    //cout<<all_of(v.begin(),v.end(),is_positive)<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl; // Gives false only if all the elements in the container is negative else true
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl; // Gives true only if all the elements in the container is negative else false
    return 0;
}