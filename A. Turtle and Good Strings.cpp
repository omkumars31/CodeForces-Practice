#include<iostream>
using namespace std;

    int main()
    {
        int t;
        cin >> t;
        while (t--) {
            int n;
            string s;
            cin >> n;
            cin >> s;
            if(s[0] == s[n-1])cout << "No" << endl;
            else cout << "Yes" << endl;
}
}