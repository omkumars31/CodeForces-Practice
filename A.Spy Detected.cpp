#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        
        // Input array elements
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Logic to find the unique element
        if (arr[0] != arr[1] && arr[1] == arr[2]) { 
            // arr[0] is the unique element
            cout << 1 << endl;
        } else if (arr[n-1] != arr[n-2] && arr[n-2] == arr[n-3]) { 
            // arr[n-1] is the unique element
            cout << n << endl;
        } else {
            // Unique element is in the middle
            for (int i = 1; i < n - 1; i++) {
                if (arr[i] != arr[i-1] && arr[i] != arr[i+1]) {
                    cout << i + 1 << endl; // 1-based index
                    break;
                }
            }
        }
    }
    return 0;
}
