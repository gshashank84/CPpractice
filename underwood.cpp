#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n;
    cin>>n;
    ll r = pow(2,n)-1;
    ll count =3;
    vector<ll>v;
    while(count >0 && r != 0){
        v.push_back(r%10);
        r = r/10;
        count--;
    }

    for(auto it:v)cout<<it;
    cout<<endl;
    


}