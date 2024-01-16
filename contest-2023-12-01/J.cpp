#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

int main() {_
    int t;
    cin >> t;
    
    while (t--) {
        string n;
        cin >> n;

        ll num = 0;
        ll sum = 0;
        for (char c: n) {
            num *= 10;
            ll exp = 1;
            int d = c - '0';
            for (int i = 0; i < n.length(); i++)
                exp *= d;
            num += d;
            sum += exp;
        }

        if (num == sum)
            cout << "Armstrong\n";
        else
            cout << "Not Armstrong\n";
    }

    return 0;
}