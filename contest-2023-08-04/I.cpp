#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cin >> m;
        vector<int> b(n);
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        // starter == 0: alice
        // starter == 1: bob
        for (int starter = 0; starter < 2; starter++) {
            bool player = starter;
            int last_card = 0, i = 0, j = 0;
            while (i < n && j < m) {
                if (player == false) {
                    if (a[i] > last_card) {
                        last_card = a[i];
                        player = true;
                    }
                    i++;
                } else {
                    if (b[j] > last_card) {
                        last_card = b[j];
                        player = false;
                    }
                    j++;
                }
            }
            if ((player && j >= m) || !player)
                cout << "Alice\n";
            else if ((!player && i >= n) || player)
                cout << "Bob\n";
        }
    }
    return 0;
}