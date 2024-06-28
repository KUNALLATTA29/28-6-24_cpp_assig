#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {12,21,32,23,56,65,76,67};
    map<int,vector<int>> map;
    for(auto it:arr){
        string k = to_string(it);
        char one = k[0];
        char two = k[1];
        int final = (one- '0') + (two-'0');
        map[final].push_back(it);
    }
    
    vector<vector<int>> arr2;
    
    for(auto it:map){
        arr2.push_back(it.second);
    }
    for(auto it: arr2){
        cout<<"[";
        for(auto k:it){
            cout<<k<<" ";
        }
        cout<<"], ";
    }
    
    return 0;
}