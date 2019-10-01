#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long int magnify(ll x){
    ll N = 1000000007;
    return (x % N + N) %N;
}

int main(){
    ll  x,y;
    cin>>x>>y;
    ll n;
    cin>>n;
    vector<ll>v;
    v.push_back(y-x);
    v.push_back(-x);
    v.push_back(-y);
    v.push_back(-y+x);
    v.push_back(x);
    v.push_back(y);

    if (n == 1){
        if (x<0){
            x = magnify(x);
            cout<<x<<endl;
        }
        else{
            cout<<x%1000000007<<endl;
        }
    }
    else if (n==2){
        if (y<0){
            y = magnify(y);
            cout<<y<<endl;
        }
        else{
            cout<<y%1000000007<<endl;
        }
    }
    else {
        if (n <9){
            n -= 3;
            n = abs(n);
        }
        else{
            n = (n-3) %6;
            n = abs(n);
        }
        cout<<n<<endl;
        ll num = v[n];
        //cout<<num<<endl;
        if (num<0) num = magnify(num);
        else num = num%1000000007;
        cout<<num;
    }
}