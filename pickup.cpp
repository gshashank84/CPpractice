#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n>>m;
    int ob[100000];
    ob[0] = 1;
    for (int i=1;i<=m;i++){
        cin >> ob[i];
    }
    long long tim = 0;
    for (int i =1;i<=m;i++){
        if (ob[i] >= ob[i-1]){
            tim += (ob[i]-ob[i-1]);
        }
        else{
            tim += (n+ob[i]-ob[i-1]);
        }
    }

    cout << tim << endl;
}