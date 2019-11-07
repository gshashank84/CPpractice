#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int a[60];
void fib(){
    long double phi = (1 + sqrt(5)) / 2;
    for(int i=0;i<60;i++){
        ll o = round(pow(phi, i) / sqrt(5));
        a[i] = o%10;
    } 
} 

int main(){
    fib();
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        
        ll pos=2;
        while((n/pos)!= 1 && pos<=n){
            pos = pos*2; 
        }
        if(n == 1) cout<< 0<<endl;
        else{
            cout<<a[(pos%60)-1]<<endl;
        }

    }       

}