#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin >>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            ll num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        vector<int>ko;
        ll mini = 0;
        ll count =1;
        for(int i=0;i<k;i++){
            mini+= v[i];
            ko.push_back(v[i]);
        }
        //cout<<mini<<endl;
        
    }
}