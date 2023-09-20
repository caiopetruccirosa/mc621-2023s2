#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

bool is_prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {_
    int n;
    cin >> n;
    
    for (int m = 1; m <= 1000; m++) {
        int a = (n*m) + 1;
        if (!is_prime(a)) {
            cout << m << '\n';
            break;
        }
    }

    return 0;
}