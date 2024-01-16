#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

ll get_mask(ll x) {
    ll m = 0, exp = 1;
    while (x > 0) {
        ll d = x % 10;
        if (d == 4 || d == 7) {
            m += d * exp;
            exp *= 10;
        }
        x /= 10;
    }
    return m;
}

int main() {_
    ll a, b;
    cin >> a >> b;

    while (get_mask(a) != b && a < 177777) {
        a++;
    }
    cout << a << '\n';

    return 0;
}