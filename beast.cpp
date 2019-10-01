#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,s,t;
    cin>>n>>s>>t;
    vector<ll>v;
    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    vector<ll>q;
    for(int i=0;i<n;i++){
        ll num;
        cin>>num;
        q.push_back(num-1);
    }

    ll count = 0;
    for(int i=0;i<n;i++){
        count++;
        ll t = v[i];
        v.erase(v.begin()+i);
        v.insert(v.begin()+q[i],t);  

        //if (v[t-1] == s-1)break;
        for(auto it:v)cout<<it<<" ";
        cout<<"==="<<s<<"==="<<t;
        cout<<endl; 
    }


    cout<<count<<endl;


    

}