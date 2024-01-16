#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

bool is_lucky(string x, int n) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] != '4' && x[i] != '7') {
            return false;
        }
        if (i < n/2) {
            sum1 += x[i] - '0';
        } else {
            sum2 += x[i] - '0';
        }
    }
    return sum1 == sum2;
}

int main() {_
    int n;
    string x;
    cin >> n >> x;

    if (is_lucky(x, n))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}