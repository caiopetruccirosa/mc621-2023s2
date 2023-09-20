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
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int sorted = 0, indices = 0;
        for (int i = 0; i < n-1; i++) {
            if (a[i] < 2*a[i+1]) {
                sorted++;
            } else {
                sorted = 0;
            }
            if (sorted == k) {
                sorted--;
                indices++;
            }
        }
        cout << indices << '\n';
    }

    return 0;
}