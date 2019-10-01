#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n,l;
    vector<long long> v;
    cin >> n>>l;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(),v.end());

    //for(auto it: v)cout << it<<" ";
    //cout<<endl;


    double mini=0;
    if (v[0] == 0 && v.size() > 1){
        mini = (v[1] - v[0])/2.000;        
    }
    else{
        mini = (double)v[0]/1.00;
    }

    auto oi = v.end();
    oi--;
    if(*oi != l){
        double mong = l-(*oi);
        mini = max(mini, mong);
    }

    
    //cout << mini<<endl;
    for(int i=1;i<v.size();i++){
        double pok = (double)(v[i] - v[i-1])/2.000;
        mini =  max(mini, pok);
    }

    
    cout <<fixed<<setprecision(10)<< mini<<endl;
    //printf("%.10f", mini);
}

