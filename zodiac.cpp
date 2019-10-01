#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printNcR(int n, int r) 
{ 
  
    // p holds the value of n*(n-1)*(n-2)..., 
    // k holds the value of r*(r-1)... 
    long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long m = __gcd(p, k); 
  
            // dividing by gcd, to simplify product 
            // division by their gcd saves from the overflow 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
        // k should be simplified to 1 
        // as C(n, r) is a natural number 
        // (denominator should be 1 ) . 
    } 
  
    else
        p = 1; 
  
    // if our approach is correct p = ans and k =1 
    cout << p << endl; 
} 

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            ll num;
            cin >>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        ll maty = v[k-1];
        ll pcount = 0;
        ll tcount = 0;
        for(int i=0;i<k;i++){
            if (v[i] == maty)pcount++;
        }
        for(auto it:v){
            if(it == maty) tcount++;
        }
        //tcountCpcount
        printNcR(tcount,pcount);



    }

}