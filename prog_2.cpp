#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {35,45,70,80,90,28,66,49,53,52,57,78};
    map<string,vector<int>> map;
    for(auto it:arr){
        if(it>65){
            map["obesity"].push_back(it);
        }else if(it<45){
            map["ricket"].push_back(it);
        }else if(45<=it<=65){
            map["healthy"].push_back(it);
        }
    }
    
    for(auto it:map){
        cout<<it.first<<" : ";
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}