#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
 
        for (int i = 0; i < 3; i++) {
            s[i] = tolower(s[i]);
        }

        if (s == "yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}