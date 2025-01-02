#include <iostream>
#include <cstring>
using namespace std;

const int N = 3001;
bool prime[N]; 
int divisors[N]; 


void sieve() {
    memset(prime, true, sizeof(prime)); // Initialize all entries as prime
    prime[0] = prime[1] = false; // 0 and 1 are not primes
    
    
    for (int i = 2; i < N; ++i) {
        if (prime[i]) { // If `i` is a prime number
            for (int j = i; j < N; j += i) {
                prime[j] = false; // Mark multiples of `i` as non-prime
                divisors[j]++; // Increment divisor count for multiples of `i`
            }
        }
    }
}

int main() {
    sieve();
    
    int n;
    cin >> n;
    
    int count = 0;
    
    for (int i = 1; i <= n; ++i) {
        if (divisors[i] == 2) {
            count++;
        }
    }
    
    cout << count << endl; 
    return 0;
}
