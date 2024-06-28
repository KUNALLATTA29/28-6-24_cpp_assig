#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {10,50,30,80,10,80};
    int total = 0;
    for(int i=0;i<arr.size();i++){
        if(i<arr.size()-1){
            if(arr[i]>arr[i+1]){
                total++;
            }
        }
    }
    cout<<total;
    return 0;
}