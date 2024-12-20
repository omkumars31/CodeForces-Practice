#include<iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    int n;
    cin >> n;
    int w;
    cin >> w;

  long long int  sum = 0;
    for( int i = 1; i<=w; i++){
          sum += (i*k);
    }

     if(sum<= n){
      cout <<0<<"\n";
	}
	else cout << sum - n << "\n";
  
}
 