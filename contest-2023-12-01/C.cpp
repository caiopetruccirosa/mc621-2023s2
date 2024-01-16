#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

int main() {_
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;

    if (n1 > n2)
        cout << "First\n";
    else
        cout << "Second\n";

    return 0;
}