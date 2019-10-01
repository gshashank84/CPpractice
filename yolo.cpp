#include<bits/stdc++.h>
using namespace std;

vector<int>permutation;
int n= 3;
bool chosen[100];

void search(){
    if (permutation.size() == n){
        //process permutation
        for(auto it :permutation)cout <<it<<" ";
        cout <<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main(){
    search();
}