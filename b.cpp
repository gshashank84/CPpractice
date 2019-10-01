#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin >> n>>m;
    long long kmax,kmin;

    long long rim = n-m+1;
    kmax = rim*(rim-1)/2;
    
    vector<long long>v;
    long long rise = n/m, saint = n%m;

   kmin = ((rise+1)*(rise)/2 )*saint + ((rise*(rise-1)/2)*(m-saint));

    cout << kmin<<" "<<kmax<<endl;
}