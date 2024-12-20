#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int rT = 240 - k;
    int sum = 0;
    int c = 0;
    for(int i = 1; i<=n; i++){
        sum+=(5*i);
         if(sum > rT)    
            break;
            c+=1;
        }
        cout << c << endl;
       
}