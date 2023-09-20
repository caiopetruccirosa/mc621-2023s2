#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

int main() {_
    ll x, ans = 0;
    cin >> x;

    while (x > 0) {
        ans += x % 2;
        x /= 2;
    }

    cout << ans << '\n';

    return 0;
}