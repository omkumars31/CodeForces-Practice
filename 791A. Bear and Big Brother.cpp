#include<iostream>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b;
    int years = 0;
    if(a > b){
        years = 0;
    }
    else{
        while( a <= b){
            a = a*3;
            b = b*2;
            years++;
        }
        
    }
    cout << years << endl;
}