#include<bits/stdc++.h>
using namespace std;
#define ll long long

int moody(ll x,ll n,ll m){
    if (n==0) return 1;
    else if (n%2 == 0){
        ll j  = moody(x,n/2,m);
        return (j*j)%m;
    }
    else{
        return ((x%m)*moody(x,n-1,m))%m;
    }
}

int main(){
    ll x, n,k;
    cin >>n;
    k =3;
    x = 2;
    //cout<< moody(2,n,10)<<endl;
    ll t = 1;
    for(int i=0;i<=k-1;i++){
        t*= 10;
    }

    t = moody(2,n,t)-1;

    ll t_copy = t;
    ll t_count =0;
    ll j = 0; 
    /*
    while (t_copy) { 
        t_copy /= 10; 
        j++; 
    }
    */ 

    /*
    for(int i=0;i<k-j;i++){
        cout<<0;
    }*/

    if (t)cout<<t;
}