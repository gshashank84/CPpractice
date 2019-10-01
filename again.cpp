#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin >> n>>m>>k;
    int x[m+1];
    for (int i=0;i<=m;i++){
        cin >> x[i];
    }

    // Ideal Approach
    /*int ans=0;
	for(int i=0; i < m; ++i){
		if(__builtin_popcount(x[i]^x[m]) <= k)
			++ans;
	}
	printf("%d\n", ans);*/

    int f=0;
    string fedor = bitset<20>(x[m]).to_string();
    vector<string> s;
    for(int i=0;i<=m;i++){
        string binary = bitset<20>(x[i]).to_string();
        s.push_back(binary);
    }
        
    for (int j=0;j<s.size()-1;j++){
        int match = 0;
        
        for(int i=0;i<20;i++){
            if (fedor[i] != s[j][i]){
                //fedor[i] == s[j][i] && fedor[i] == '1'){
                match++;
            }
        }
        if (match <= k){
            f++;
        }
        //if (it == '1') cout << "Hurray"<<endl;
    }

    //decimal to binary of x array...
    // 2 -> 10
    // make array of size of n
    // put the value 1 for each index acc to binary no
    // match no of 1s for both the ith and (m+1)th
    // if match> k then f++


    cout << f<<endl;
}

