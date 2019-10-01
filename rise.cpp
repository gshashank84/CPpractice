#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    vector<char> vi;
    cin >> n>>t;
    for (int i=0;i<n;i++){
        char s;
        cin >> s;
        vi.push_back(s); 
    }
    while(t--){
        for(int i=0;i<vi.size();i++){
            if (vi[i] == 'B' && vi[i+1]== 'G'){
                cout <<"swapping "<<vi[i]<<i<<"--"<<vi[i+1]<<i+1<<endl;
                swap(vi[i],vi[i+1]);
                
            }
        }
            
    }

    for(auto it :vi){
        cout << it;
    }
    cout<<endl;



    return 0;
}