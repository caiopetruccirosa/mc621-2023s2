#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;


int main() {_
    ll n, m;
    cin >> n >> m;

    if(n > 26)
        cout << m <<'\n';
    else
        cout << m % (1 << n) <<'\n';

    return 0;
}