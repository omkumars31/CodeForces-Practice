#include<iostream>
using namespace std;
int main(){
    int k, r;
    cin>> k >> r;
    for(int i = 1; i<=9; i++){
        if((k*i)%10 == 0){
          cout << i;
          break;
        }
        else if((k*i)%10 == r){
          cout << i;
          break;
        }
    }
  
}