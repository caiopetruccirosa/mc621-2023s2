#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

int main() {_
    int n, m;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int k = 0, max_ratio = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] % a[i] == 0) {
                int ratio = b[j] / a[i];
                if (ratio > max_ratio) {
                    k = 1;
                    max_ratio = ratio;
                } else if (ratio == max_ratio) {
                    k++;
                }
            }
        }
    }
    cout << k << '\n';

    return 0;
}