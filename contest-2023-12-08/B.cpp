#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

int main() {_
    int n;
    cin >> n;

    if (n % 2 != 0) {
        cout << -1 << '\n';
    } else {
        for (int i = 1; i < n; i += 2) {
            cout << i + 1 << ' ' << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}