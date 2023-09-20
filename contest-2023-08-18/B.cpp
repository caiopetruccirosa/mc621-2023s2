#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

int main() {_
    ll n, m, so, t;
    cin >> n >> m >> so >> t;

    vector<vector<ll>> G(n, vector<ll>());
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<ll> s(n, 0), n_s(n, 0);

    s[so] = 1;

    for (ll i = 0; i < t; i++) {
        //cout << "Instante t = " << i << '\n';
        for (ll c = 0; c < n; c++) {
            //cout << "\tVértice " << c << " tem " << s[c] << " infecções" << '\n';
            for (ll neigh: G[c])
                n_s[neigh] += s[c];
        }
        s = n_s;
        n_s = vector<ll>(n, 0);
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
        ans += s[i];

    cout << ans << '\n';

    return 0;
}