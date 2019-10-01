#include<bits/stdc++.h>
using namespace std;
#define ll long long
unsigned ll int fact(ll int n){
    if (n==0 || n==1) return 1;
    else{
        return n*fact(n-1);
    }
}

int main(){
    ll t;
    cin >>t;
    while(t--){
        ll n,k;
        cin >> n>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            ll num;
            cin >>num;
            v.push_back(num);
        }
        ll sp = v[k-1];
        ll spcount = 0;
        for(int i=0;i<v.size();i++){
            if (sp == v[i]) spcount++;
        }
        ll bcount=0;
        for(int i=0;i<k;i++){
            if(sp == v[i])bcount++;
        }
        n = spcount;
        k = bcount;

        unsigned ll o = min(k,n-k);
        unsigned ll a =1;
        for(int i=n;i>max(k,n-k);i--){
            a = a*i; 
        }
        //cout<<"o -> "<< o <<endl;
        o = fact(o);
        //cout<<"o -> "<< o <<endl;
        a = a/o;
        cout<<a<<endl;
        
        
    }

}