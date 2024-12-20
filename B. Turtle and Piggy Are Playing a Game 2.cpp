#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n;
        vector<long long>v(n);
        
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
            sort(v.begin(), v.end());
            cout << v[n/2] << endl;

    }
}
/*
void solve(){
    long long n;
    cin >> n;
    vector<long long >v(n);
    for(auto &it: v){
    cin >> it;
    }
    sort(all(v));
    cout << v[n/2] << endl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    int t = 1;
    cin >> t;
    while(t--){
    solve();
    }
}
*/