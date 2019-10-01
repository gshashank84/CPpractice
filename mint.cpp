#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;

    long double dis = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    dis -= 1e-12;
    ll op = dis/(2*r);
    //ll k = dis % (2*r);
    
    if (x1 == x2 && y2 == y1) cout<<0<<endl;
    else if (op ==0 && (dis/r) == 0){cout<<0<<endl;}
    else {cout<<op+1<<endl;}

}