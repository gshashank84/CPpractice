#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n;
    cin>>n;
    vector<vector<ll>>v;

    for(int i=0;i<n;i++){
        vector<ll>roe;
        for(int j=0;j<n;j++){
            ll num;
            cin>>num;
            roe.push_back(num);
        }
        v.push_back(roe);
    }
    
    vector<ll>g;
    ll lo = v[0][0];
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            lo = __gcd(v[i][j],lo);
        }
        g.push_back(lo);
        lo = v[i+1][0];
    }
    for(auto it:g)cout<<it<<endl;
    ll ina;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if ((g[i]*g[j]) == v[i][j]){
                ina  = i;
            }
        }
    }

    for (int i=0;i<n;i++){
        cout<<v[ina][i] / g[ina]<<endl;
    }
    
    
}