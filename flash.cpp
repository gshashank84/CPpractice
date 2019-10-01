#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool checkprime(ll n){
    if (n == 1)return false;
    else if (n==2 || n==3)return true;
    else{
    for(int i=2;i<=sqrt(n);i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
    } 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    n++;
    ll count =10;
    while(n%2 ==0 ||  n%3 ==0){
        n++;
    }
    ll indi;
    //cout<<n<<" "<<checkprime(n)<<endl;

    if (!checkprime(n)) indi = n+2;
    else {indi = n;}

    while(count >0){
        if (checkprime(indi)){
            cout<< indi<<" ";
            count--;
        }
        indi+= 4;
        
        if (checkprime(indi) && count >0){
            cout<< indi<<" ";
            count--;
        }
        indi += 2;
        
    }


  
}