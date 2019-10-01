#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>v;
        for(int i=0;i<m;i++){
            ll num;
            cin>>num;
            v.push_back(num);
        }
        ll c= 0;
        bool fair = true;
        for(int i=1;i<=n;i++){
            c+=i;
        }
        ll cop = c;
        ll count =0;
        while(count <m){
            ll b = count;
            for(int i=b;i<b+n;i++){
                cout<<c<<" -- "<<v[count]<<endl;
                if (count<m){
                c -= v[count];
                count++;
                }
            }
            cout<<"ONE LINE CROSSED _____________"<<endl;
            if (c != 0){
                cout<<c<<endl;
                fair = false;
                break;
            }
            c = cop;
        }
        if (fair == false)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}